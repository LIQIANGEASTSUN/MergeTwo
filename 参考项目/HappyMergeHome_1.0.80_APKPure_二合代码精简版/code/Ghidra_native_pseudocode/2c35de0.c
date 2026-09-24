
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c45de0(int param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_02c46070 + 0x2c45df8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c46074 + 0x2c45e0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c46078 + 0x2c45e18));
    func_0x01438628(*(undefined4 *)(_UNK_02c4607c + 0x2c45e24));
    func_0x01438628(*(undefined4 *)(_UNK_02c46080 + 0x2c45e30));
    func_0x01438628(*(undefined4 *)(_UNK_02c46084 + 0x2c45e3c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c46088 + 0x2c45e50) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c4608c + 0x2c45e6c);
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
  if (*(int *)(**(int **)(_UNK_02c46090 + 0x2c45f28) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c46094 + 0x2c45f44));
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
  FUN_02bda8ac(iVar2,uVar4,uVar7,**(undefined4 **)(_UNK_02c46098 + 0x2c46050),1,0);
  return;
}

