
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029fef18(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_029ff150 + 0x29fef2c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029ff154 + 0x29fef40));
    func_0x01438628(*(undefined4 *)(_UNK_029ff158 + 0x29fef4c));
    func_0x01438628(*(undefined4 *)(_UNK_029ff15c + 0x29fef58));
    func_0x01438628(*(undefined4 *)(_UNK_029ff160 + 0x29fef64));
    func_0x01438628(*(undefined4 *)(_UNK_029ff164 + 0x29fef70));
    func_0x01438628(*(undefined4 *)(_UNK_029ff168 + 0x29fef7c));
    func_0x01438628(*(undefined4 *)(_UNK_029ff16c + 0x29fef88));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2527,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2527,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02887764 + 0x2887694);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02887768 + 0x28876a8),0);
      *pcVar4 = '\x01';
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar3,&uStack_30,uVar5,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288776c + 0x2887754));
    return uVar5;
  }
  piVar7 = *(int **)(_UNK_029ff170 + 0x29fefe0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar7;
  }
  piVar8 = *(int **)(_UNK_029ff174 + 0x29ff000);
  iVar6 = *piVar8;
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4(iVar6);
  }
  iVar1 = func_0x024eec50(uVar5,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_029ff178 + 0x29ff040) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_029ff17c + 0x29ff05c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = **(undefined4 **)(_UNK_029ff184 + 0x29ff090);
    uStack_20 = 0;
    uVar5 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_029ff180 + 0x29ff084),0,1);
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x024eecb8(iVar1,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x03680314(uVar5,uVar3,**(undefined4 **)(_UNK_029ff188 + 0x29ff0f4));
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
    *puVar2 = uVar5;
    func_0x014385cc(puVar2,uVar5);
  }
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar7;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
}

