def mergeAlternately( word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        new_word = ""
        for i in range(min(len(word1), len(word2))):
            new_word += word1[i] + word2[i]
            new_word + word1[i+1:] + word2[i+1:]
        if(len(word1) > len(word2)):
            new_word += word1[len(word2):]
            print(word1[len(word2):])
        else:
            new_word += word2[len(word1):]
            print(word2[len(word1):])
        print(new_word)

            

mergeAlternately("abcq", "pqr")