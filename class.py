# # def solve():
# #     # Write code here
# #     s = input()
# #     a = s.upper()
# #     if (a == "YES"):
# #         print(a)
# #     else:
# #         print("NO")


# # # If no testcase then remove input()
# # t = 1
# # t = int(input())
# # while t > 0:
# #     solve()
# #     t = t-1
# # import math as m

# # class Circle:
# #     def __init__(self, radius):
# #         self.radius = radius

# #     def calArea(self):
# #         self.area = m.pi * self.radius * self.radius
# #         return self.area

# # radius_value = 5
# # circle1 = Circle(radius_value)
# # area_result = circle1.calArea()


# # str = input()
# # list = []
# # str1 = ""
# # str2 = ""


# # for i in range (0, len(str), 1):
# #     str1 = str1 + str[i]
# #     if (str1 not in list): 
# #         list.append(str1)
# #     else :
# #         str1 = str1 - str[i] + str[i+1]
# #         if (str1 not in list): 
# #             list.append(str1)

# # for i in range (0, len(str), 2) :
# #     str2 = str2 + str[i]
# #     if (str2 not in list):
# #         list.append(str2)
# #     else :
# #         str2 = str[:-1] + str[i-1]
# #         if (str2 not in list): 
# #             list.append(str2)

        

# # print(len(list))
# # # print(list)
# # def count_distinct_strings(t, test_cases):
# #     results = []

# #     for i in range(t):
# #         n, s = test_cases[i]
# #         distinct_prefixes = set()

# #         # Adding the original string as a distinct prefix
# #         distinct_prefixes.add(s)

# #         # Adding prefixes by removing the first character
# #         for j in range(1, n):
# #             distinct_prefixes.add(s[j:])

# #         # Adding prefixes by removing the second character
# #         for j in range(0, n - 1):
# #             distinct_prefixes.add(s[:j] + s[j + 1:])

# #         # Adding prefixes by removing both first and second characters
# #         for j in range(1, n - 1):
# #             distinct_prefixes.add(s[j + 1:])

# #         results.append(len(distinct_prefixes) - 1)  # Subtracting 1 to exclude the empty string

# #     return results

# # # Input
# # t = int(input())
# # test_cases = []

# # for _ in range(t):
# #     n = int(input())
# #     s = input()
# #     test_cases.append((n, s))

# # # Output
# # results = count_distinct_strings(t, test_cases)

# # for result in results:
# #     print(result)


# # print("Hello, World!")

# import mysql.connector as connect

# def solve():
#     x=input()
#     if len(x) % 2 ==0:
#         return "CHAT WITH HER!"
#     else:
#         print("ignore him")
 
# # If no testcase then remove input()
# t = 1
# # t=int(input())
# while t>0:
#     solve()
#     t = t-1

# import tkinter as tk
# # import tkMessageBox as bx
# from tkinter import messagebox as bx

# tp = tk.Tk()
# def exButton():
#     bx.showinfo("Python button example")

# exButton()

from tkinter import *
# tp = Tk()
# la1 = Label(tp, text="User ID", fg="blue")
# en1 = Entry(tp, bd=6, relief=RIDGE, bg="lightblue")
# la1.pack(side=LEFT)
# en1.pack(side=RIGHT)
# # la1.pack()
# # en1.pack()
# tp.minsize(200, 50)

# tp.mainloop()
 
# master = Tk() 
# l1=Label(master,text="Provinces of Sri Lanka") 
# l1.pack() 
# listbox = Listbox(master) 
# listbox.pack() 
# listbox.insert(END, "Central") 
# for item in ["Eastern", "North Central", "Northern", "North Western", "Sabaragamuwa", "Southern", "Uva", "Western"]: 
#     listbox.insert(END, item) 
# mainloop() 


# def on_select(event):
#     selected_index = listbox.curselection()
#     selected_item = listbox.get(selected_index)
#     status_label.config(text=f"Selected: {selected_item}")

# # Create the main window
# root = Tk()
# root.title("Listbox Example")

# # Create a Listbox
# listbox = Listbox(root, selectmode=SINGLE)
# listbox.pack(pady=10)

# # Add items to the Listbox
# items = ["Item 1", "Item 2", "Item 3", "Item 4", "Item 5"]
# for item in items:
#     listbox.insert(END, item)

# # Set up event binding to handle selection changes
# listbox.bind("<<ListboxSelect>>", on_select)

# # Create a label to display the selected item
# status_label = Label(root, text="Selected: ")
# status_label.pack()

# # Start the Tkinter event loop
# root.mainloop()

# # Maximum number of stars in a line
# n = 5
# # Printing the upper triangle
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print("*", end="")
#     print()
# # Printing the lower triangle
# for i in range(n-1,0,-1):
#     for j in range(1, i+1):
#         print("*", end="")
#     print()


for tc in range(int(input())):
	a, b, c = map(int, input().split())
	print(1 if a < c else -1, end=" ")
	print(b if c < a * b else -1)