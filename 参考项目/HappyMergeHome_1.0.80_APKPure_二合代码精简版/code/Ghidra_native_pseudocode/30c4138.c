
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030d4138(int param_1)

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
  
  pcVar3 = (char *)(_UNK_030d43f0 + 0x30d4150);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d43f4 + 0x30d4164));
    func_0x01438628(*(undefined4 *)(_UNK_030d43f8 + 0x30d4170));
    func_0x01438628(*(undefined4 *)(_UNK_030d43fc + 0x30d417c));
    func_0x01438628(*(undefined4 *)(_UNK_030d4400 + 0x30d4188));
    func_0x01438628(*(undefined4 *)(_UNK_030d4404 + 0x30d4194));
    func_0x01438628(*(undefined4 *)(_UNK_030d4408 + 0x30d41a0));
    func_0x01438628(*(undefined4 *)(_UNK_030d440c + 0x30d41ac));
    func_0x01438628(*(undefined4 *)(_UNK_030d4410 + 0x30d41b8));
    func_0x01438628(*(undefined4 *)(_UNK_030d4414 + 0x30d41c4));
    func_0x01438628(*(undefined4 *)(_UNK_030d4418 + 0x30d41d0));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x76df,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d441c + 0x30d4240));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_030d4420 + 0x30d4254));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_030d4424 + 0x30d4278) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d4428 + 0x30d4294));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e7ac0(iVar1,**(undefined4 **)(_UNK_030d442c + 0x30d42b4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_030d4430 + 0x30d42e0));
      puVar5 = *(undefined4 **)(_UNK_030d4434 + 0x30d42f4);
      puVar7 = *(undefined4 **)(_UNK_030d4438 + 0x30d42fc);
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
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030d443c + 0x30d4354));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x76df,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291975c(iVar1,param_1,0);
  }
  return iVar1;
}

