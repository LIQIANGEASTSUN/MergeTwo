
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fcfe8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_029fd424 + 0x29fd000);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fd428 + 0x29fd014));
    func_0x01438628(*(undefined4 *)(_UNK_029fd42c + 0x29fd020));
    func_0x01438628(*(undefined4 *)(_UNK_029fd430 + 0x29fd02c));
    func_0x01438628(*(undefined4 *)(_UNK_029fd434 + 0x29fd038));
    func_0x01438628(*(undefined4 *)(_UNK_029fd438 + 0x29fd044));
    func_0x01438628(*(undefined4 *)(_UNK_029fd43c + 0x29fd050));
    func_0x01438628(*(undefined4 *)(_UNK_029fd440 + 0x29fd05c));
    func_0x01438628(*(undefined4 *)(_UNK_029fd444 + 0x29fd068));
    func_0x01438628(*(undefined4 *)(_UNK_029fd448 + 0x29fd074));
    func_0x01438628(*(undefined4 *)(_UNK_029fd44c + 0x29fd080));
    func_0x01438628(*(undefined4 *)(_UNK_029fd450 + 0x29fd08c));
    func_0x01438628(*(undefined4 *)(_UNK_029fd454 + 0x29fd098));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7c2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_029fd458 + 0x29fd0fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_029fd45c + 0x29fd118));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_029fd460 + 0x29fd138));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x164);
    uVar2 = func_0x029f05a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_029fd464 + 0x29fd17c));
    if (iVar3 == 0) {
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_029fd468 + 0x29fd198));
      FUN_0269eddc(iVar3,0);
      iVar4 = func_0x029fd48c(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_029fd46c + 0x29fd1f4));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      puVar9 = *(undefined4 **)(_UNK_029fd470 + 0x29fd210);
      puVar10 = *(undefined4 **)(_UNK_029fd474 + 0x29fd218);
      while (iVar4 = func_0x04873f24(&uStack_38,*puVar9), uVar2 = uStack_2c, iVar4 != 0) {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar3 + 0x10);
        iVar4 = func_0x029fd5c4(param_1,uVar2);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar4 + 8);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar6,uVar2,*puVar10);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_029fd478 + 0x29fd294));
      uVar11 = func_0x029f3fe4(param_1);
      if ((int)uVar11 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
          FUN_0269e718(0,extraout_r1_00,uVar7,uVar2,0);
          uVar8 = *(undefined4 *)(param_1 + 0x20);
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          func_0x014388e4();
          uVar2 = extraout_r1_01;
        }
        else {
          FUN_0269e718(iVar3,(int)((ulonglong)uVar11 >> 0x20),uVar7,uVar2,0);
          uVar8 = *(undefined4 *)(param_1 + 0x20);
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          uVar2 = extraout_r1;
        }
        FUN_0269e7e8(iVar3,uVar2,uVar8,uVar7,0);
      }
      uVar2 = func_0x029f05a0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_029fd484 + 0x29fd358));
    }
    uVar2 = func_0x029f05a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_029fd488 + 0x29fd388));
  }
  else {
    iVar1 = func_0x029540a4(0x7c2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02884288(iVar1,param_1,0);
  }
  return;
}

