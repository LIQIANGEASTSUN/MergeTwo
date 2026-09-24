
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019f0304(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_019f0620 + 0x19f031c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f0624 + 0x19f0330));
    func_0x01438628(*(undefined4 *)(_UNK_019f0628 + 0x19f033c));
    func_0x01438628(*(undefined4 *)(_UNK_019f062c + 0x19f0348));
    func_0x01438628(*(undefined4 *)(_UNK_019f0630 + 0x19f0354));
    *pcVar6 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iVar1 = func_0x02953fd4(0x36c2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019f0634 + 0x19f03d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f0638 + 0x19f03f0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x026ffbe0(iVar1,0);
    lVar10 = func_0x014e6e04((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
    iVar1 = FUN_019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x30);
    uVar7 = *(undefined4 *)(iVar1 + 0x34);
    piVar3 = (int *)func_0x024f1514(0);
    uStack_44 = 0;
    uStack_48 = 0;
    func_0x0152458c(&uStack_48,0x7b2,1,1,0);
    iVar1 = func_0x014e6a14(uVar8,uVar7,0x15180,0);
    if (piVar3 == (int *)0x0) {
      func_0x014388e4();
    }
    (**(code **)(*piVar3 + 0xf0))
              (&uStack_50,piVar3,uStack_48,uStack_44,*(undefined4 *)(*piVar3 + 0xf4));
    uStack_3c = uStack_4c;
    uStack_40 = uStack_50;
    if (*(int *)(**(int **)(_UNK_019f063c + 0x19f04cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar9 = func_0x014e63e0((int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
    uVar2 = 0;
    func_0x015246bc(&uStack_50,&uStack_40,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0);
    uStack_24 = uStack_4c;
    uStack_28 = uStack_50;
    func_0x0152466c(&uStack_50,&uStack_28,0,0x3ff00000,0);
    uStack_2c = uStack_4c;
    uStack_30 = uStack_50;
    uVar7 = func_0x0152484c(&uStack_30,0);
    uVar8 = func_0x0152480c(&uStack_30,0);
    uVar4 = func_0x0152477c(&uStack_30,0);
    func_0x015245ec(&uStack_38,uVar7,uVar8,uVar4,0,0,0,0);
    iVar5 = func_0x024f1524(uStack_28,uStack_24,uStack_38,uStack_34,0);
    if (iVar5 < 1) {
      iVar5 = (int)((ulonglong)((lVar10 << 0x20) + (longlong)(int)lVar10 * -0x3dd1baf9) >> 0x20);
      if (iVar1 < (iVar5 >> 0x10) - (iVar5 >> 0x1f)) {
        uVar2 = 1;
      }
    }
    else {
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x28);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = (uint)(*(int *)(iVar1 + 0xc) == 0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x36c2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02869630(iVar1,param_1,0);
  }
  return uVar2;
}

