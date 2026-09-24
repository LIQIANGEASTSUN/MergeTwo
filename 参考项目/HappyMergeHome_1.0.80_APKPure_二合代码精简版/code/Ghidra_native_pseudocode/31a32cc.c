
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031b32cc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_031b3644 + 0x31b32e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031b3648 + 0x31b32f8));
    func_0x01438628(*(undefined4 *)(_UNK_031b364c + 0x31b3304));
    func_0x01438628(*(undefined4 *)(_UNK_031b3650 + 0x31b3310));
    func_0x01438628(*(undefined4 *)(_UNK_031b3654 + 0x31b331c));
    func_0x01438628(*(undefined4 *)(_UNK_031b3658 + 0x31b3328));
    func_0x01438628(*(undefined4 *)(_UNK_031b365c + 0x31b3334));
    func_0x01438628(*(undefined4 *)(_UNK_031b3660 + 0x31b3340));
    func_0x01438628(*(undefined4 *)(_UNK_031b3664 + 0x31b334c));
    func_0x01438628(*(undefined4 *)(_UNK_031b3668 + 0x31b3358));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7cc6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7cc6,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x031b7b88(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar7 = *(int **)(_UNK_031b366c + 0x31b33dc);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_031b3670 + 0x31b3400);
  iVar1 = func_0x04e4a028(*puVar8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_031b3674 + 0x31b3438) + 0x74) == 0) {
    func_0x014387a4();
  }
  uStack_30 = 0;
  iVar1 = func_0x02aedf90(uVar3,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if (iVar1 == 0) {
    iVar1 = func_0x031b7b88(param_1);
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
    func_0x03b70d24(iVar1,**(undefined4 **)(_UNK_031b3678 + 0x31b34ac));
    iVar1 = func_0x031b7b88(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x026ffbe0(iVar4,0);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = uVar3;
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar6 = extraout_r1;
    }
    uStack_30 = 0;
    func_0x026ee084(iVar1,uVar6,(int)uVar9,uVar3);
    if (*(int *)(**(int **)(_UNK_031b367c + 0x31b3540) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031b3680 + 0x31b355c));
    piVar7 = *(int **)(_UNK_031b3684 + 0x31b3570);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar7;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x334);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_031b3688 + 0x31b3594),1);
    uStack_28 = 0;
    iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_031b368c + 0x31b35b4),&uStack_28);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar4 != 0) && (iVar2 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)
       ) {
      uVar3 = func_0x01438904();
      func_0x01438790(uVar3,0);
    }
    if (piVar7[3] == 0) {
      func_0x014388e8();
    }
    piVar7[4] = iVar4;
    func_0x014385cc(piVar7 + 4,iVar4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar6,piVar7,0);
  }
  return;
}

