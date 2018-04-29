


1  start
2. accept Arr (asc sorted) ,Accept Key(element to search)
3. assign size =10 left=0, right=size-1
4. check left<=right
     if yes
         mid=(left+right)/2
         check(key==arr[mid]
            if yes
                returm mid
          check (key>arr[mid]
             if yes
               left=mid+1
             
            check (key<arr[mid]
              if yes
                 right=mid-1
            go to 4 
5      if not
         return  -1
6. stop          
       
