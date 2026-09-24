
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b213c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_016b24b4 + 0x16b2154);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b24b8 + 0x16b2168));
    func_0x01438628(*(undefined4 *)(_UNK_016b24bc + 0x16b2174));
    func_0x01438628(*(undefined4 *)(_UNK_016b24c0 + 0x16b2180));
    func_0x01438628(*(undefined4 *)(_UNK_016b24c4 + 0x16b218c));
    func_0x01438628(*(undefined4 *)(_UNK_016b24c8 + 0x16b2198));
    func_0x01438628(*(undefined4 *)(_UNK_016b24cc + 0x16b21a4));
    func_0x01438628(*(undefined4 *)(_UNK_016b24d0 + 0x16b21b0));
    func_0x01438628(*(undefined4 *)(_UNK_016b24d4 + 0x16b21bc));
    func_0x01438628(*(undefined4 *)(_UNK_016b24d8 + 0x16b21c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x88cf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x88cf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x016b6be8(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_016b24dc + 0x16b224c);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_016b24e0 + 0x16b2270);
  iVar1 = func_0x014e9518(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_016b24e4 + 0x16b22a8) + 0x74) == 0) {
    func_0x014387a4();
  }
  uStack_30 = 0;
  iVar1 = func_0x02aedf90(uVar3,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if (iVar1 == 0) {
    iVar1 = func_0x016b6be8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0570(iVar1,**(undefined4 **)(_UNK_016b24e8 + 0x16b231c));
    iVar1 = func_0x016b6be8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x026ffbe0(iVar5,0);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = uVar3;
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar6 = extraout_r1;
    }
    uStack_30 = 0;
    func_0x026ee084(iVar1,uVar6,(int)uVar9,uVar3);
    if (*(int *)(**(int **)(_UNK_016b24ec + 0x16b23b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b24f0 + 0x16b23cc));
    piVar7 = *(int **)(_UNK_016b24f4 + 0x16b23e0);
    iVar5 = *piVar7;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x334);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_016b24f8 + 0x16b2404),1);
    uStack_28 = 0;
    iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_016b24fc + 0x16b2424),&uStack_28);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar5 != 0) && (iVar2 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)
       ) {
      uVar3 = func_0x01438904();
      func_0x01438790(uVar3,0);
    }
    if (piVar7[3] == 0) {
      func_0x014388e8();
    }
    piVar7[4] = iVar5;
    func_0x014385cc(piVar7 + 4,iVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar6,piVar7,0);
  }
  return;
}

