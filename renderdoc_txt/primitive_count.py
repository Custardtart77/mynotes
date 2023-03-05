# 统计renderdoc txt的定点数和面数 
draw_call = 0
vertices = 0 
with open("1.txt", mode='r') as f:
    counter_strs = f.readlines()
    for counter_str in counter_strs:       
        if "DrawIndexed(" in counter_str:
            draw_call += 1
            left = counter_str.find('(')
            mid = counter_str.find(',')
            right = counter_str.find(')')
            vertices += int(counter_str[left+1:mid]) * int(counter_str[mid+2:right])
            continue
        if "sub-command" in counter_str:
            draw_call += 1
            left = counter_str.find('<')
            mid = counter_str.find(',')
            right = counter_str.find('>')
            vertices += int(counter_str[left+1:mid]) * int(counter_str[mid+2:right])
            continue
        if "vkCmdDraw(" in counter_str: 
            draw_call += 1
            left = counter_str.find('(')
            mid = counter_str.find(',')
            right = counter_str.find(')')
            vertices += int(counter_str[left+1:mid]) * int(counter_str[mid+2:right])         
print("drawcalls: ", draw_call)      
print("vertices: ", vertices)   
print("primitives: ", int(vertices/3))   
