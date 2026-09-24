
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c45af0(int param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_02c45d80 + 0x2c45b08);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c45d84 + 0x2c45b1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c45d88 + 0x2c45b28));
    func_0x01438628(*(undefined4 *)(_UNK_02c45d8c + 0x2c45b34));
    func_0x01438628(*(undefined4 *)(_UNK_02c45d90 + 0x2c45b40));
    func_0x01438628(*(undefined4 *)(_UNK_02c45d94 + 0x2c45b4c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c45d98 + 0x2c45b60) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c45d9c + 0x2c45b7c);
  iVar2 = func_0x014e9518(*puVar8);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(iVar6 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = FUN_02bad204(iVar2,uVar4,uVar7,0);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x44);
  uVar5 = *(uint *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar2 + 0xc) <= uVar5) {
    func_0x014388e8();
  }
  iVar2 = *(int *)(iVar2 + uVar5 * 4 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02c2865c(iVar2,0,0,0);
  if (*(int *)(**(int **)(_UNK_02c45da0 + 0x2c45c38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c45da4 + 0x2c45c54));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x0202998c(iVar2,0x29,0,0);
  iVar2 = func_0x014e9518(*puVar8);
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x44);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar5) {
    func_0x014388e8();
  }
  iVar6 = *(int *)(iVar6 + uVar5 * 4 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x1c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0xd4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  lVar1 = (longlong)iVar6 * 0x3c;
  FUN_02be1f2c(iVar2,uVar4,(int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0);
  iVar2 = func_0x014e9518(*puVar8);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(undefined4 *)(iVar6 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02bda8ac(iVar2,uVar4,uVar7,**(undefined4 **)(_UNK_02c45da8 + 0x2c45d60),1,0);
  return;
}

