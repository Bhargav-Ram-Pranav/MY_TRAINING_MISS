cmd_/home/engineer/Documents/workqueues/Module.symvers := sed 's/ko$$/o/' /home/engineer/Documents/workqueues/modules.order | scripts/mod/modpost -m -a  -o /home/engineer/Documents/workqueues/Module.symvers -e -i Module.symvers   -T -