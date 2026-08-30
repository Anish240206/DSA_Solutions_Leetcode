class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        unique = set()
        for e in emails:
            name, domain = e.split('@')
            name = name.split("+")[0]
            name = name.replace(".", "")
            unique.add((name, domain))
        return len(unique)