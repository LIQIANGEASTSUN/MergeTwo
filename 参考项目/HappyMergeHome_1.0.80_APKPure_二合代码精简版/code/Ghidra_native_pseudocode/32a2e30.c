
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032b2e30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
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
  
  pcVar4 = (char *)(_UNK_032b3058 + 0x32b2e48);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b305c + 0x32b2e5c));
    func_0x01438628(*(undefined4 *)(_UNK_032b3060 + 0x32b2e68));
    func_0x01438628(*(undefined4 *)(_UNK_032b3064 + 0x32b2e74));
    func_0x01438628(*(undefined4 *)(_UNK_032b3068 + 0x32b2e80));
    func_0x01438628(*(undefined4 *)(_UNK_032b306c + 0x32b2e8c));
    func_0x01438628(*(undefined4 *)(_UNK_032b3070 + 0x32b2e98));
    func_0x01438628(*(undefined4 *)(_UNK_032b3074 + 0x32b2ea4));
    func_0x01438628(*(undefined4 *)(_UNK_032b3078 + 0x32b2eb0));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x2934,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2934,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032b307c + 0x32b2f10));
  func_0x032b64b4(iVar1,0);
  iVar3 = FUN_032a4314(param_1);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_032b3080 + 0x32b2f3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032b3084 + 0x32b2f58));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar3 = func_0x029a6fa8(iVar3,param_2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar5 = (int *)(iVar1 + 8);
    *piVar5 = iVar3;
    func_0x014385cc(piVar5,iVar3);
    if (*piVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_032b3088 + 0x32b2fbc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032b308c + 0x32b2fd8));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x24);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032b3090 + 0x32b2ff8));
      func_0x03a062d0(uVar6,iVar1,**(undefined4 **)(_UNK_032b3094 + 0x32b3018),0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x04cfe1c0(iVar3,uVar6,**(undefined4 **)(_UNK_032b3098 + 0x32b303c));
      uVar6 = 0;
      if (iVar1 != 0) {
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

