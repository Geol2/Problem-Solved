class Solution(object):
    def listToString(self, word):
        return "".join(word)
    
    def mergeAlternately(self, word1, word2):
        list_word1 = list(word1)
        list_word2 = list(word2)

        merge = []
        length = len(list_word1) + len(list_word2)

        for i in range(length):
            first_length = len(list_word1)
            twice_length = len(list_word2)

            if first_length > 0:
                merge.append(list_word1[0])
                del list_word1[0]

            if twice_length > 0:
                merge.append(list_word2[0])
                del list_word2[0]
        
        return self.listToString(merge)
    
sol = Solution();
result = sol.mergeAlternately('abc', 'pqr')
print(result)