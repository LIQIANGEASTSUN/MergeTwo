/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemComponentPool<object>$$AllocByType RVA 0x42fd970 =====

undefined4 FUN_0430d970(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = **(int **)(*(int *)(param_2 + 0x10) + 0x60);
  uVar1 = func_0x02d921e0(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 8));
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  iVar4 = *(int *)(iVar3 + 8);
  uVar5 = *(uint *)(iVar3 + 0xc);
  iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x14);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x02457d50();
  }
  if (uVar5 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar4 + uVar5 * 4 + 0x10) = uVar1;
  }
  else {
    func_0x0328f170(iVar3,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
  }
  return uVar1;
}



// ===== FAT.Merge.ItemComponentPool<object>$$Alloc RVA 0x42fd980 =====

undefined4 FUN_0430d980(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = func_0x02d921e0(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8));
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x02457d50();
  }
  iVar3 = *(int *)(iVar2 + 8);
  uVar4 = *(uint *)(iVar2 + 0xc);
  iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x14);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (uVar4 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar4 + 1;
    *(undefined4 *)(iVar3 + uVar4 * 4 + 0x10) = uVar1;
  }
  else {
    func_0x0328f170(iVar2,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  return uVar1;
}



// ===== FAT.Merge.ItemComponentPool<object>$$Free RVA 0x42fda1c =====

uint FUN_0430da1c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x02457d50();
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84(iVar2);
  }
  iVar2 = func_0x02457d4c(param_2,iVar2);
  iVar5 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x02457d84(iVar5);
  }
  iVar3 = 0;
  if ((iVar2 != 0) && (iVar3 = func_0x02457d4c(iVar2,iVar5), iVar3 == 0)) {
    func_0x02457d64(iVar2,iVar5);
    iVar3 = 0;
  }
  uVar1 = func_0x030ffc18(*(undefined4 *)(iVar4 + 8),iVar3,0,*(undefined4 *)(iVar4 + 0xc),
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  param_3 + 0x10) + 0x60) + 0x18) + 0x10) + 0x60) +
                                                  0x5c) + 0x10) + 0x60) + 0xa0));
  if (-1 < (int)uVar1) {
    func_0x03290bd4(iVar4,uVar1);
  }
  return ~uVar1 >> 0x1f;
}



// ===== FAT.Merge.ItemComponentPool<object>$$.ctor RVA 0x42fdad8 =====

int FUN_0430dad8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x10) + 0xbd) & 1) == 0) {
    func_0x02457d84();
  }
  uVar1 = func_0x02457d58();
  func_0x0328e950(uVar1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x1c));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_1;
}

