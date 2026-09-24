
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029fecc8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_029feed4 + 0x29fecdc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029feed8 + 0x29fecf0));
    func_0x01438628(*(undefined4 *)(_UNK_029feedc + 0x29fecfc));
    func_0x01438628(*(undefined4 *)(_UNK_029feee0 + 0x29fed08));
    func_0x01438628(*(undefined4 *)(_UNK_029feee4 + 0x29fed14));
    func_0x01438628(*(undefined4 *)(_UNK_029feee8 + 0x29fed20));
    func_0x01438628(*(undefined4 *)(_UNK_029feeec + 0x29fed2c));
    func_0x01438628(*(undefined4 *)(_UNK_029feef0 + 0x29fed38));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2644,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2644,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar3,&uStack_30,uVar5,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288776c + 0x2887754));
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_029feef4 + 0x29fed90);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar6;
  }
  piVar8 = *(int **)(_UNK_029feef8 + 0x29fedb0);
  iVar7 = *piVar8;
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4(iVar7);
  }
  iVar1 = func_0x024eec50(uVar5,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_029feefc + 0x29fedf0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_029fef00 + 0x29fee0c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = **(undefined4 **)(_UNK_029fef08 + 0x29fee40);
    uStack_18 = 0;
    uVar5 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_029fef04 + 0x29fee34),0,1);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x03680054(uVar5,**(undefined4 **)(_UNK_029fef0c + 0x29fee78));
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
    *puVar2 = uVar5;
    func_0x014385cc(puVar2,uVar5);
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar6;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
}

