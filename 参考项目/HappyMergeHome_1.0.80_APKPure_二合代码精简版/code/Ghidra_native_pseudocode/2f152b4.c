
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f252b4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02f2556c + 0x2f252cc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f25570 + 0x2f252e0));
    func_0x01438628(*(undefined4 *)(_UNK_02f25574 + 0x2f252ec));
    func_0x01438628(*(undefined4 *)(_UNK_02f25578 + 0x2f252f8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2557c + 0x2f25304));
    func_0x01438628(*(undefined4 *)(_UNK_02f25580 + 0x2f25310));
    func_0x01438628(*(undefined4 *)(_UNK_02f25584 + 0x2f2531c));
    func_0x01438628(*(undefined4 *)(_UNK_02f25588 + 0x2f25328));
    func_0x01438628(*(undefined4 *)(_UNK_02f2558c + 0x2f25334));
    func_0x01438628(*(undefined4 *)(_UNK_02f25590 + 0x2f25340));
    func_0x01438628(*(undefined4 *)(_UNK_02f25594 + 0x2f2534c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6cf6,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f25598 + 0x2f253bc));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02f2559c + 0x2f253d0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02f255a0 + 0x2f253f4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f255a4 + 0x2f25410));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03710250(iVar1,**(undefined4 **)(_UNK_02f255a8 + 0x2f25430));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02f255ac + 0x2f2545c));
      puVar5 = *(undefined4 **)(_UNK_02f255b0 + 0x2f25470);
      puVar7 = *(undefined4 **)(_UNK_02f255b4 + 0x2f25478);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02f255b8 + 0x2f254d0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x6cf6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02913898(iVar1,param_1,0);
  }
  return iVar1;
}

