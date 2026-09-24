
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ae4a20(int *param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01ae4c40 + 0x1ae4a38);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae4c44 + 0x1ae4a4c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae4c48 + 0x1ae4a58));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xce3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ae46e8(param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ae4c4c + 0x1ae4b00));
      func_0x026bf1dc(iVar1,0);
      iVar6 = param_1[6];
      iVar4 = param_1[7];
      if (iVar1 == 0) {
        func_0x014388e4();
        uStack_28 = 0;
        func_0x026bed3c(0,extraout_r1_01,iVar6,iVar4);
        iVar4 = param_1[8];
        iVar6 = param_1[9];
        func_0x014388e4();
        uVar5 = extraout_r1_02;
      }
      else {
        uStack_28 = 0;
        func_0x026bed3c(iVar1,extraout_r1,iVar6,iVar4);
        iVar4 = param_1[8];
        iVar6 = param_1[9];
        uVar5 = extraout_r1_00;
      }
      uStack_28 = 0;
      func_0x026bee0c(iVar1,uVar5,iVar4,iVar6);
      func_0x01ae4e80(param_1,iVar1);
      func_0x01ae5338(param_1);
      iVar4 = FUN_01ae4524();
      iVar6 = param_1[4];
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ea4(iVar4,iVar6,iVar1,**(undefined4 **)(_UNK_01ae4c50 + 0x1ae4bb8));
      func_0x01ae53a0(param_1,iVar1);
      iVar4 = func_0x01ae5790(param_1);
      if (iVar4 != 0) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar1 + 0x60);
        iVar1 = func_0x01ae5790(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x24);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x026ec598(iVar4,iVar1 == 1,0);
      }
    }
    return 1;
  }
  iVar1 = func_0x029540a4(0xce3,0);
  if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x024f56e0(&uStack_30,0,0);
  return uVar5;
}

