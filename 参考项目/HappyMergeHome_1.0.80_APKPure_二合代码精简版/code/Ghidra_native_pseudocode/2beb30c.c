
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bfb30c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02bfb4cc + 0x2bfb320);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfb4d0 + 0x2bfb334));
    func_0x01438628(*(undefined4 *)(_UNK_02bfb4d4 + 0x2bfb340));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2196,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x2196,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  piVar7 = *(int **)(_UNK_02bfb4d8 + 0x2bfb398);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02bfb4dc + 0x2bfb3b4);
  iVar2 = func_0x014e9518(*puVar8);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar1 = 0;
  iVar2 = FUN_02bad204(iVar2,uVar6,uVar3,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) != 10) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02bd10d0(iVar4,iVar2,0);
    uVar1 = 1;
    if (iVar4 == 0) {
      uVar1 = (uint)((*(uint *)(iVar2 + 0xc) & 0xfffffffb) == 2);
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02baf28c(iVar4,iVar2,0);
    if ((iVar4 == 0) && (*(int *)(iVar2 + 0xc) != 2)) {
      return uVar1 & *(int *)(iVar2 + 0xc) == 6;
    }
  }
  return uVar1;
}

