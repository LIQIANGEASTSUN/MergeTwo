
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c82084(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_01c8222c + 0x1c8209c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c82230 + 0x1c820b0));
    func_0x01438628(*(undefined4 *)(_UNK_01c82234 + 0x1c820bc));
    func_0x01438628(*(undefined4 *)(_UNK_01c82238 + 0x1c820c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c8223c + 0x1c820d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c82240 + 0x1c820e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c82244 + 0x1c820ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad22,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xad22,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0293808c + 0x2937f98);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02938090 + 0x2937fac),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02938094 + 0x293807c));
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c82248 + 0x1c82148));
  func_0x01c88028(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar4 = FUN_01c803b0(param_1);
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0xc);
  }
  if (iVar3 != 0 && iVar4 != 0) {
    uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01c8224c + 0x1c82198));
    func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_01c82250 + 0x1c821b4),0);
    iVar1 = func_0x024f0f88(iVar3,uVar6,**(undefined4 **)(_UNK_01c82254 + 0x1c821cc));
    if (-1 < iVar1) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (iVar1 + 1 < *(int *)(iVar4 + 0xc)) {
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar6 = (*(code *)&SUB_04cfd760)
                          (iVar4,iVar1 + 1,**(undefined4 **)(_UNK_01c82258 + 0x1c82220));
        return uVar6;
      }
    }
  }
  return 0;
}

