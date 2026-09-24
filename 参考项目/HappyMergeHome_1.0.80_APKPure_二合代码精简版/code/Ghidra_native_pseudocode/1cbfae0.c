
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ccfae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01ccfde4 + 0x1ccfb00);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccfde8 + 0x1ccfb18));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfdec + 0x1ccfb24));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfdf0 + 0x1ccfb30));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfdf4 + 0x1ccfb3c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfdf8 + 0x1ccfb48));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfdfc + 0x1ccfb54));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfe00 + 0x1ccfb60));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfe04 + 0x1ccfb6c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfe08 + 0x1ccfb78));
    func_0x01438628(*(undefined4 *)(_UNK_01ccfe0c + 0x1ccfb84));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ea1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ccfe10 + 0x1ccfbec));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_3;
    iVar2 = FUN_01cca6e4(param_1);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_01ccfe14 + 0x1ccfc28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01ccfe18 + 0x1ccfc44));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x01ccfe40(iVar2);
      if ((iVar2 != 0) && (-1 < *(int *)(iVar1 + 8))) {
        if (*(int *)(**(int **)(_UNK_01ccfe1c + 0x1ccfc80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01ccfe20 + 0x1ccfc9c));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x20);
        uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ccfe24 + 0x1ccfcbc));
        func_0x03a062d0(uVar3,iVar1,**(undefined4 **)(_UNK_01ccfe28 + 0x1ccfcdc),0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f0618(iVar2,uVar3,**(undefined4 **)(_UNK_01ccfe2c + 0x1ccfd00));
        if (iVar2 != 0) {
          piVar7 = *(int **)(_UNK_01ccfe30 + 0x1ccfd1c);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar8 = *(undefined4 **)(_UNK_01ccfe34 + 0x1ccfd38);
          iVar2 = func_0x014e9518(*puVar8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02bdd790(iVar2,param_2,0,0,0);
          if (iVar2 != -1) {
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(*puVar8);
            uVar3 = *(undefined4 *)(param_1 + 0x44);
            uVar6 = *(undefined4 *)(iVar1 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02bb18c4(iVar4,iVar2,uVar6,2,0,param_2,1,0xffffffff,uVar3,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ea1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028759c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

