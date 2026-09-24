
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b1a44(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  
  pcVar6 = (char *)(_UNK_029b1bfc + 0x29b1a5c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029b1c00 + 0x29b1a70));
    func_0x01438628(*(undefined4 *)(_UNK_029b1c04 + 0x29b1a7c));
    func_0x01438628(*(undefined4 *)(_UNK_029b1c08 + 0x29b1a88));
    func_0x01438628(*(undefined4 *)(_UNK_029b1c0c + 0x29b1a94));
    func_0x01438628(*(undefined4 *)(_UNK_029b1c10 + 0x29b1aa0));
    func_0x01438628(*(undefined4 *)(_UNK_029b1c14 + 0x29b1aac));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x44);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(undefined4 *)(param_2 + 0x30);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x046ccb14(iVar7,uVar8,**(undefined4 **)(_UNK_029b1c18 + 0x29b1ae4));
  if (iVar7 == 0) {
    iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_029b1c20 + 0x29b1b34));
    func_0x024eed9c(iVar7,**(undefined4 **)(_UNK_029b1c24 + 0x29b1b48));
    iVar4 = *(int *)(param_1 + 0x44);
    uVar8 = *(undefined4 *)(param_2 + 0x30);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x046cc8c8(iVar4,uVar8,iVar7,**(undefined4 **)(_UNK_029b1c28 + 0x29b1b78));
  }
  else {
    iVar7 = *(int *)(param_1 + 0x44);
    uVar8 = *(undefined4 *)(param_2 + 0x30);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x046cc810(iVar7,uVar8,**(undefined4 **)(_UNK_029b1c1c + 0x29b1b18));
  }
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar7 + 8);
  uVar9 = *(uint *)(iVar7 + 0xc);
  piVar3 = *(int **)(_UNK_029b1c2c + 0x29b1bac);
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  iVar4 = *piVar3;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar9) {
    (*(code *)&SUB_04cfda38)
              (iVar7,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
    return;
  }
  *(uint *)(iVar7 + 0xc) = uVar9 + 1;
  piVar3 = (int *)(iVar5 + uVar9 * 4 + 0x10);
  *piVar3 = param_2;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

