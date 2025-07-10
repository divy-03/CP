import javax.swing.*;
import javax.swing.border.*;
import java.awt.*;
import java.awt.event.*;

public class SwingComponentsDemo {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            // Create main frame
            JFrame frame = new JFrame("Swing Components Demo");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setSize(800, 600);

            // Main content panel
            JPanel mainPanel = new JPanel();
            mainPanel.setLayout(new BoxLayout(mainPanel, BoxLayout.Y_AXIS));

            // Section 1: Text Fields, Password Fields, Text Areas with Scroll Pane, Labels
            mainPanel.add(createTextComponentPanel());

            // Section 2: Choice Components (CheckBoxes, RadioButtons, ComboBox, Slider)
            mainPanel.add(createChoiceComponentPanel());

            // Section 3: Borders Demonstration
            mainPanel.add(createBorderPanel());

            // Section 4: Menus and Pop-Up Menu
            frame.setJMenuBar(createMenuBar(frame));
            addPopupMenu(frame);

            // Add scroll pane for main content
            JScrollPane scrollPane = new JScrollPane(mainPanel);
            frame.add(scrollPane);

            // Display the frame
            frame.setVisible(true);
        });
    }

    private static JPanel createTextComponentPanel() {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBorder(new TitledBorder("Text Components"));

        JPanel inputPanel = new JPanel(new GridLayout(3, 2, 5, 5));
        inputPanel.add(new JLabel("Name:"));
        inputPanel.add(new JTextField(20));
        inputPanel.add(new JLabel("Password:"));
        inputPanel.add(new JPasswordField(20));

        panel.add(inputPanel, BorderLayout.NORTH);

        JTextArea textArea = new JTextArea(5, 30);
        JScrollPane textScrollPane = new JScrollPane(textArea);
        panel.add(new JLabel("Description:"), BorderLayout.WEST);
        panel.add(textScrollPane, BorderLayout.CENTER);

        return panel;
    }

    private static JPanel createChoiceComponentPanel() {
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.setBorder(new TitledBorder("Choice Components"));

        // Check Boxes
        JPanel checkBoxPanel = new JPanel();
        checkBoxPanel.add(new JCheckBox("Option 1"));
        checkBoxPanel.add(new JCheckBox("Option 2"));
        checkBoxPanel.add(new JCheckBox("Option 3"));
        panel.add(checkBoxPanel);

        // Radio Buttons
        JPanel radioPanel = new JPanel();
        ButtonGroup group = new ButtonGroup();
        JRadioButton rb1 = new JRadioButton("Choice A");
        JRadioButton rb2 = new JRadioButton("Choice B");
        group.add(rb1);
        group.add(rb2);
        radioPanel.add(rb1);
        radioPanel.add(rb2);
        panel.add(radioPanel);

        // Combo Box
        JComboBox<String> comboBox = new JComboBox<>(new String[]{"Select", "Item 1", "Item 2", "Item 3"});
        panel.add(comboBox);

        // Slider
        JSlider slider = new JSlider(0, 100, 50);
        slider.setMajorTickSpacing(25);
        slider.setPaintTicks(true);
        slider.setPaintLabels(true);
        panel.add(slider);

        return panel;
    }

    private static JPanel createBorderPanel() {
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(1, 4, 5, 5));
        panel.setBorder(new TitledBorder("Borders"));

        JLabel etched = new JLabel("Etched Border");
        etched.setBorder(new EtchedBorder());
        panel.add(etched);

        JLabel line = new JLabel("Line Border");
        line.setBorder(new LineBorder(Color.BLUE));
        panel.add(line);

        JLabel empty = new JLabel("Empty Border");
        empty.setBorder(new EmptyBorder(10, 10, 10, 10));
        panel.add(empty);

        JLabel titled = new JLabel("Titled Border");
        titled.setBorder(new TitledBorder("Title"));
        panel.add(titled);

        return panel;
    }

    private static JMenuBar createMenuBar(JFrame frame) {
        JMenuBar menuBar = new JMenuBar();

        // File menu
        JMenu fileMenu = new JMenu("File");
        JMenuItem openItem = new JMenuItem("Open");
        JMenuItem exitItem = new JMenuItem("Exit");
        exitItem.addActionListener(e -> frame.dispose());
        fileMenu.add(openItem);
        fileMenu.add(exitItem);
        menuBar.add(fileMenu);

        // Edit menu with checkboxes and radio buttons
        JMenu editMenu = new JMenu("Edit");
        JCheckBoxMenuItem checkBoxMenuItem = new JCheckBoxMenuItem("Enable Feature");
        editMenu.add(checkBoxMenuItem);

        JMenu radioMenu = new JMenu("Options");
        ButtonGroup group = new ButtonGroup();
        JRadioButtonMenuItem option1 = new JRadioButtonMenuItem("Option 1");
        JRadioButtonMenuItem option2 = new JRadioButtonMenuItem("Option 2");
        group.add(option1);
        group.add(option2);
        radioMenu.add(option1);
        radioMenu.add(option2);
        editMenu.add(radioMenu);

        menuBar.add(editMenu);

        return menuBar;
    }

    private static void addPopupMenu(JFrame frame) {
        JPopupMenu popupMenu = new JPopupMenu();

        JMenuItem cutItem = new JMenuItem("Cut");
        JMenuItem copyItem = new JMenuItem("Copy");
        JMenuItem pasteItem = new JMenuItem("Paste");

        popupMenu.add(cutItem);
        popupMenu.add(copyItem);
        popupMenu.add(pasteItem);

        frame.addMouseListener(new MouseAdapter() {
            public void mousePressed(MouseEvent e) {
                showPopup(e);
            }

            public void mouseReleased(MouseEvent e) {
                showPopup(e);
            }

            private void showPopup(MouseEvent e) {
                if (e.isPopupTrigger()) {
                    popupMenu.show(e.getComponent(), e.getX(), e.getY());
                }
            }
        });
    }
}