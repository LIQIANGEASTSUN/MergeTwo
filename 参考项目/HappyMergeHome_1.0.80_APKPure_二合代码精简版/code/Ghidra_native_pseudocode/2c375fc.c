
/* WARNING: Possible PIC construction at 0x02c4767c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c47680) */
/* WARNING: Removing unreachable block (ram,0x02c4768c) */
/* WARNING: Removing unreachable block (ram,0x02c47690) */
/* WARNING: Removing unreachable block (ram,0x02c4769c) */
/* WARNING: Removing unreachable block (ram,0x02c476a0) */
/* WARNING: Removing unreachable block (ram,0x02c476b8) */
/* WARNING: Removing unreachable block (ram,0x02c476bc) */

void FUN_02c475fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0xc4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94f8(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,0,0);
  return;
}

