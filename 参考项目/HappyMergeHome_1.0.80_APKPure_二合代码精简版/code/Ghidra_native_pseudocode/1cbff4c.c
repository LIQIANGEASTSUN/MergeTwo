
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ccff4c(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01cd0114 + 0x1ccff60);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd0118 + 0x1ccff74));
    func_0x01438628(*(undefined4 *)(_UNK_01cd011c + 0x1ccff80));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0120 + 0x1ccff8c));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0124 + 0x1ccff98));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0128 + 0x1ccffa4));
    func_0x01438628(*(undefined4 *)(_UNK_01cd012c + 0x1ccffb0));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0130 + 0x1ccffbc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x941,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x941,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar2 = (char *)(_UNK_02887764 + 0x2887694);
    if (*pcVar2 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02887768 + 0x28876a8),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar3,&uStack_30,uVar5,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288776c + 0x2887754));
    return uVar5;
  }
  piVar4 = *(int **)(_UNK_01cd0134 + 0x1cd0014);
  piVar6 = *(int **)(_UNK_01cd0138 + 0x1cd0020);
  uVar5 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar5,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01cd013c + 0x1cd005c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cd0140 + 0x1cd0078));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = **(undefined4 **)(_UNK_01cd0148 + 0x1cd00ac);
    uStack_18 = 0;
    uVar5 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_01cd0144 + 0x1cd00a0),0,1);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x03680054(uVar5,**(undefined4 **)(_UNK_01cd014c + 0x1cd00e4));
    *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 4) = uVar5;
    func_0x014385cc();
  }
  return *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 4);
}

