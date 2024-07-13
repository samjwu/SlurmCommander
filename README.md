# SLURM Commander

Ansible playbooks to run commands via SLURM.

## Requirements

```shell
pip install ansible
```

## Usage

Add hostnames for SLURM controller node in `staging.ini`.

To run a simple job:

Replace the script to run the job in `./roles/simple_job/files/simple.py`

Set the job arguments in `./roles/simple_job/vars/job_args.yml`

```shell
ansible-playbook -i staging.ini ./roles/simple_job/tasks/submit_simple_job.yml
```
