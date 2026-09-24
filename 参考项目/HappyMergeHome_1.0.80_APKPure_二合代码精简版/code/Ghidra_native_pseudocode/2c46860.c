
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c56860(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_02c56a34 + 0x2c56878);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c56a38 + 0x2c5688c));
    func_0x01438628(*(undefined4 *)(_UNK_02c56a3c + 0x2c56898));
    func_0x01438628(*(undefined4 *)(_UNK_02c56a40 + 0x2c568a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c56a44 + 0x2c568b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f3a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f3a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_02c56a48 + 0x2c5690c);
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67b88(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*piVar6 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_18 = 0;
    func_0x02b65c74(iVar1,0x14,0,0);
    iVar4 = **(int **)(**(int **)(_UNK_02c56a4c + 0x2c56974) + 0x5c);
    piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c56a50 + 0x2c56984),1);
    uStack_14 = 5;
    iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_02c56a54 + 0x2c569a4),&uStack_14);
    if (piVar6 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar1 != 0) && (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)
       ) {
      uVar7 = func_0x01438904();
      func_0x01438790(uVar7,0);
    }
    if (piVar6[3] == 0) {
      func_0x014388e8();
    }
    piVar6[4] = iVar1;
    func_0x014385cc(piVar6 + 4,iVar1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02b2e164(iVar4,6,piVar6,0);
  }
  return;
}

