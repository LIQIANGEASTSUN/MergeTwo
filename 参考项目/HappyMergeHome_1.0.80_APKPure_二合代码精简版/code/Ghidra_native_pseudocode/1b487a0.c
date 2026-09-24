
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b587a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x02953fd4(0xa67c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01b58804();
    if (iVar1 == 0) {
      return;
    }
    pcVar4 = (char *)(_UNK_01b58c70 + 0x1b58960);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01b58c74 + 0x1b58974));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c78 + 0x1b58980));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c7c + 0x1b5898c));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c80 + 0x1b58998));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c84 + 0x1b589a4));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c88 + 0x1b589b0));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c8c + 0x1b589bc));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c90 + 0x1b589c8));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c94 + 0x1b589d4));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c98 + 0x1b589e0));
      func_0x01438628(*(undefined4 *)(_UNK_01b58c9c + 0x1b589ec));
      func_0x01438628(*(undefined4 *)(_UNK_01b58ca0 + 0x1b589f8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x02953fd4(0xa67d,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x3b) == '\0') {
        *(undefined1 *)(param_1 + 0x3b) = 1;
        func_0x01b58d20();
        if (*(int *)(**(int **)(_UNK_01b58ca4 + 0x1b58a6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b58ca8 + 0x1b58a88));
        piVar6 = *(int **)(_UNK_01b58cac + 0x1b58a9c);
        iVar5 = *piVar6;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
          iVar5 = *piVar6;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xfc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0374c388(iVar1,uVar7,**(undefined4 **)(_UNK_01b58cb0 + 0x1b58ad4));
        if (*(int *)(**(int **)(_UNK_01b58cb4 + 0x1b58aec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x024ef144(iVar1,0,0);
        if (iVar5 == 0) {
          FUN_01b581bc(param_1,**(undefined4 **)(_UNK_01b58cb8 + 0x1b58b38));
          iVar5 = **(int **)(**(int **)(_UNK_01b58cbc + 0x1b58b4c) + 0x5c);
          piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01b58cc0 + 0x1b58b5c),1);
          auStack_1c[0] = FUN_01b57230(param_1);
          iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_01b58cc4 + 0x1b58b80),auStack_1c);
          if (piVar6 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar1 != 0) &&
             (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if (piVar6[3] == 0) {
            func_0x014388e8();
          }
          piVar6[4] = iVar1;
          func_0x014385cc(piVar6 + 4,iVar1);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02b2e164(iVar5,6,piVar6,0);
        }
        else {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x01b58f1c(iVar1);
        }
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01b58cc8 + 0x1b58c18));
        func_0x0152e3ec(uVar7,param_1,**(undefined4 **)(_UNK_01b58ccc + 0x1b58c34),0);
        if (*(int *)(**(int **)(_UNK_01b58cd0 + 0x1b58c48) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar7,0);
      }
      return;
    }
    iVar1 = func_0x029540a4(0xa67d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa67c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
  return;
}

