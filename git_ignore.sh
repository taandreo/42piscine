git check-ignore $(find . -type f | sed 's|^./||')
# ls -A | git check-ignore --stdin
# git status -s --ignored | grep "\!\!" | sed 's/\!\!\ //'
# git ls-files --other --ignored --exclude standard
git check-ignore -v $(find . -type f -print)
git check-ignore $(find . -type f -print)
git check-ignore *