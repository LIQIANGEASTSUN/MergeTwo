
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031470a0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03147360 + 0x31470b8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03147364 + 0x31470cc));
    func_0x01438628(*(undefined4 *)(_UNK_03147368 + 0x31470d8));
    func_0x01438628(*(undefined4 *)(_UNK_0314736c + 0x31470e4));
    func_0x01438628(*(undefined4 *)(_UNK_03147370 + 0x31470f0));
    func_0x01438628(*(undefined4 *)(_UNK_03147374 + 0x31470fc));
    func_0x01438628(*(undefined4 *)(_UNK_03147378 + 0x3147108));
    func_0x01438628(*(undefined4 *)(_UNK_0314737c + 0x3147114));
    func_0x01438628(*(undefined4 *)(_UNK_03147380 + 0x3147120));
    func_0x01438628(*(undefined4 *)(_UNK_03147384 + 0x314712c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1771,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03147388 + 0x31471a0));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_0314738c + 0x31471b4));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_03147390 + 0x31471d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03147394 + 0x31471f4));
      iVar2 = FUN_03146010(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03147398 + 0x3147250));
        puVar6 = *(undefined4 **)(_UNK_0314739c + 0x3147264);
        puVar7 = *(undefined4 **)(_UNK_031473a0 + 0x314726c);
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
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_031473a4 + 0x31472c4));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1771,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

