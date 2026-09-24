
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018c3410(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_018c353c + 0x18c342c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c3540 + 0x18c3440));
    func_0x01438628(*(undefined4 *)(_UNK_018c3544 + 0x18c344c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9527,0);
  if (iVar1 == 0) {
    iVar1 = FUN_018c3314(param_1);
    uVar5 = 0x3f800000;
    if (iVar1 != 0) {
      iVar1 = FUN_018c3314(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      puVar6 = *(undefined4 **)(_UNK_018c3548 + 0x18c34e0);
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          return 0x3f800000;
        }
        iVar3 = FUN_018c3314(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0152983c(iVar3,iVar1,*puVar6);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
      } while (param_2 < *(int *)(iVar3 + 0xc));
      uVar5 = *(undefined4 *)(iVar3 + 0x10);
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0x9527,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
  uVar5 = func_0x024f5720(&uStack_38,0,0);
  return uVar5;
}

