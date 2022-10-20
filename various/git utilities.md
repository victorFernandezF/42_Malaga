# GIT COMMANDS AND UTILITIES

- git clone <your_repository_url> <your_directory>: clone a repository in a directory. Directory is optional.
- git add <files_to_add>: Add the files you want to upload to your repo. *git add .* add every modified files.
- git commit -m "<message>": captures a snapshot of the project's currently staged changes.
	- Make a commit without message: commit -a --allow-empty-message -m
	- Change last commit message: git commit ---amend.
- git push: uploads commits.
- git pull: Get all the new changes from the repo to the local directory.
- git stats: show a list with te files added and the files that are not.

### Git alias
- created alias
	- git config --global alias.<your_alias_name> <command>
		>- Example: git config --global alias.a "git add ."   
		>Now git a will do the same that git add . 
		>- Example: git config --global alias.co "git commit -m"   
		>Now git co "your message" will do the same that git commit -m "message"   
- See all alias created
	- git config --get-regexp ^alias
- Delete an alias
	- git config --global --unset alias.<you_alias_name>

To be continued...