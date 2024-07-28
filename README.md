# SLURM Commander

Ansible playbooks to run commands via SLURM.

![SLURM logo](./slurm.png)

## Requirements

```shell
pip install ansible
```

## Usage

Add hostname for SLURM controller node in `staging.ini`.

Configure the files and variables the playbook will use based on the role, then run the playbook.

The manage jobs role handles monitoring and cancelling jobs.

Other roles handle launching different types of jobs.

### Example

To run a simple job:

Replace the script to run the job in `./roles/simple_job/files/simple.py`

Set the job arguments in `./roles/simple_job/vars/job_args.yml`

```shell
ansible-playbook -i staging.ini ./roles/simple_job/tasks/submit_simple_job.yml
```
