
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02baf084(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar4 = (char *)(_UNK_02baf264 + 0x2baf0a0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baf268 + 0x2baf0b4));
    func_0x01438628(*(undefined4 *)(_UNK_02baf26c + 0x2baf0c0));
    func_0x01438628(*(undefined4 *)(_UNK_02baf270 + 0x2baf0cc));
    func_0x01438628(*(undefined4 *)(_UNK_02baf274 + 0x2baf0d8));
    func_0x01438628(*(undefined4 *)(_UNK_02baf278 + 0x2baf0e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfb6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfb6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02897860 + 0x289776c);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02897864 + 0x2897780),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02897868 + 0x2897850));
    return uVar6;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar5 = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046c268c(iVar1,**(undefined4 **)(_UNK_02baf27c + 0x2baf168));
    puVar7 = *(undefined4 **)(_UNK_02baf280 + 0x2baf17c);
    piVar8 = *(int **)(_UNK_02baf284 + 0x2baf184);
    puVar9 = *(undefined4 **)(_UNK_02baf288 + 0x2baf18c);
    while( true ) {
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar5) break;
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,iVar5,*puVar7);
      iVar2 = func_0x02baf28c(param_1,iVar1);
      if (iVar2 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = *(undefined4 *)(iVar1 + 8);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x035e4174(uVar6,uVar3,1,*puVar9);
      }
      iVar5 = iVar5 + 1;
    }
  }
  return *(undefined4 *)(param_1 + 0x1c);
}

