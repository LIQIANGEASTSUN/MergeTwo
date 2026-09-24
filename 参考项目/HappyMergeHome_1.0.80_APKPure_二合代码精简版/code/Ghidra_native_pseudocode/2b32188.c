
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b42188(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  pcVar3 = (char *)(_UNK_02b423fc + 0x2b4219c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b42400 + 0x2b421b0));
    func_0x01438628(*(undefined4 *)(_UNK_02b42404 + 0x2b421bc));
    func_0x01438628(*(undefined4 *)(_UNK_02b42408 + 0x2b421c8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4240c + 0x2b421d4));
    func_0x01438628(*(undefined4 *)(_UNK_02b42410 + 0x2b421e0));
    func_0x01438628(*(undefined4 *)(_UNK_02b42414 + 0x2b421ec));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x650,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b4ed88();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04753f38(&uStack_50,iVar1,**(undefined4 **)(_UNK_02b42418 + 0x2b42280));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    puVar4 = *(undefined4 **)(_UNK_02b4241c + 0x2b422ac);
    piVar6 = *(int **)(_UNK_02b42420 + 0x2b422b4);
    do {
      do {
        do {
          iVar1 = func_0x048b6860(&uStack_38,*puVar4);
          if (iVar1 == 0) {
            func_0x048b69ac(&uStack_38,**(undefined4 **)(_UNK_02b42430 + 0x2b4234c));
            return 0;
          }
          iVar1 = (int)uStack_28;
          iVar2 = func_0x02b4ab1c((int)uStack_28);
        } while (iVar2 == 0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = *(undefined4 *)(iVar1 + 0x20);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x02b3eca0(uVar5);
      } while (iVar2 == 0);
      iVar2 = *(int *)(iVar1 + 0x20);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    } while (*(char *)(iVar2 + 9) != '\0');
    func_0x048b69ac(&uStack_38,**(undefined4 **)(_UNK_02b42424 + 0x2b42334));
  }
  else {
    iVar1 = func_0x029540a4(0x650,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0287fc98(iVar1,0);
  }
  return iVar1;
}

