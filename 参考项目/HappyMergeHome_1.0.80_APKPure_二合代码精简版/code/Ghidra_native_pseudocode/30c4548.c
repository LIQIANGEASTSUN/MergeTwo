
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030d4548(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_030d4808 + 0x30d4560);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d480c + 0x30d4574));
    func_0x01438628(*(undefined4 *)(_UNK_030d4810 + 0x30d4580));
    func_0x01438628(*(undefined4 *)(_UNK_030d4814 + 0x30d458c));
    func_0x01438628(*(undefined4 *)(_UNK_030d4818 + 0x30d4598));
    func_0x01438628(*(undefined4 *)(_UNK_030d481c + 0x30d45a4));
    func_0x01438628(*(undefined4 *)(_UNK_030d4820 + 0x30d45b0));
    func_0x01438628(*(undefined4 *)(_UNK_030d4824 + 0x30d45bc));
    func_0x01438628(*(undefined4 *)(_UNK_030d4828 + 0x30d45c8));
    func_0x01438628(*(undefined4 *)(_UNK_030d482c + 0x30d45d4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0xf48,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d4830 + 0x30d4648));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_030d4834 + 0x30d465c));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_030d4838 + 0x30d4680) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d483c + 0x30d469c));
      iVar2 = FUN_030d34b8(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030d4840 + 0x30d46f8));
        puVar6 = *(undefined4 **)(_UNK_030d4844 + 0x30d470c);
        puVar7 = *(undefined4 **)(_UNK_030d4848 + 0x30d4714);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030d484c + 0x30d476c));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0xf48,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

