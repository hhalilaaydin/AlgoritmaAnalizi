
# coding: utf-8

# In[12]:

def find_max_triple(a,b,c):
    if a>b:
        if b>c:
            return a
        elif a>c:
            return a
        else:
            return c
    elif b>c:
        return b
    else:
        return c

find_max_triple(35,22,8)         


# In[13]:

def find_middle(list=[-3, 5, -2, -1, 2]):
    middle=int(len(list)/2)
    
    sum_left_max=0
    sum_left=0
    for i in range(middle-1,-1,-1):
        sum_left=sum_left+list[i]
        if sum_left>sum_left_max:
            sum_left_max=sum_left
      
        
    sum_right_max=0
    sum_right=0
    for i in range(middle,len(list)):
        sum_right=sum_right+list[i]
        if sum_right>sum_right_max:
            sum_right_max=sum_right
    
    return sum_left_max+sum_right_max

find_middle()


# In[14]:

def max_sub_sum_array(array):
    if(len(array)<2):
        return sum(array)
    else:
        middle=int(len(array)/2)
        sum_left=max_sub_sum_array(array[0:middle-1])
        sum_right=max_sub_sum_array(array[middle:])
        sum_middle=find_middle(array)
    return find_max_triple(sum_left,sum_right,sum_middle)

        


# In[15]:

myList= [4, -3, 5, -2, -1, 2, 6, -2 ]
result=max_sub_sum_array(myList)
print(result)


# In[ ]:



