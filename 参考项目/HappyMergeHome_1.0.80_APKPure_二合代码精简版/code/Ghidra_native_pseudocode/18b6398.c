
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018c6398(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
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
  
  pcVar3 = (char *)(_UNK_018c65a4 + 0x18c63ac);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c65a8 + 0x18c63c0));
    func_0x01438628(*(undefined4 *)(_UNK_018c65ac + 0x18c63cc));
    func_0x01438628(*(undefined4 *)(_UNK_018c65b0 + 0x18c63d8));
    func_0x01438628(*(undefined4 *)(_UNK_018c65b4 + 0x18c63e4));
    func_0x01438628(*(undefined4 *)(_UNK_018c65b8 + 0x18c63f0));
    func_0x01438628(*(undefined4 *)(_UNK_018c65bc + 0x18c63fc));
    func_0x01438628(*(undefined4 *)(_UNK_018c65c0 + 0x18c6408));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3b24,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02887764 + 0x2887694);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02887768 + 0x28876a8),0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = 0;
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
      uVar6 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar6 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar4,&uStack_30,uVar6,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288776c + 0x2887754));
    return uVar6;
  }
  piVar5 = *(int **)(_UNK_018c65c4 + 0x18c6460);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar5;
  }
  piVar7 = *(int **)(_UNK_018c65c8 + 0x18c6480);
  iVar8 = *piVar7;
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4(iVar8);
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_018c65cc + 0x18c64c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c65d0 + 0x18c64dc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = **(undefined4 **)(_UNK_018c65d8 + 0x18c6510);
    uStack_18 = 0;
    uVar6 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_018c65d4 + 0x18c6504),0,1);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x03680054(uVar6,**(undefined4 **)(_UNK_018c65dc + 0x18c6548));
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
    *puVar2 = uVar6;
    func_0x014385cc(puVar2,uVar6);
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar5;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
}

