
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae6228(int param_1)

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
  
  iVar1 = func_0x02953fd4(0xa494,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01ae628c();
    if (iVar1 == 0) {
      return;
    }
    pcVar4 = (char *)(_UNK_01ae66fc + 0x1ae63e8);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01ae6700 + 0x1ae63fc));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6704 + 0x1ae6408));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6708 + 0x1ae6414));
      func_0x01438628(*(undefined4 *)(_UNK_01ae670c + 0x1ae6420));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6710 + 0x1ae642c));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6714 + 0x1ae6438));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6718 + 0x1ae6444));
      func_0x01438628(*(undefined4 *)(_UNK_01ae671c + 0x1ae6450));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6720 + 0x1ae645c));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6724 + 0x1ae6468));
      func_0x01438628(*(undefined4 *)(_UNK_01ae6728 + 0x1ae6474));
      func_0x01438628(*(undefined4 *)(_UNK_01ae672c + 0x1ae6480));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x02953fd4(0xa495,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x3b) == '\0') {
        *(undefined1 *)(param_1 + 0x3b) = 1;
        func_0x01ae67ac();
        if (*(int *)(**(int **)(_UNK_01ae6730 + 0x1ae64f4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ae6734 + 0x1ae6510));
        piVar6 = *(int **)(_UNK_01ae6738 + 0x1ae6524);
        iVar5 = *piVar6;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
          iVar5 = *piVar6;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x100);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0374c388(iVar1,uVar7,**(undefined4 **)(_UNK_01ae673c + 0x1ae655c));
        if (*(int *)(**(int **)(_UNK_01ae6740 + 0x1ae6574) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x024ef144(iVar1,0,0);
        if (iVar5 == 0) {
          FUN_01ae5bcc(param_1,**(undefined4 **)(_UNK_01ae6744 + 0x1ae65c4));
          iVar5 = **(int **)(**(int **)(_UNK_01ae6748 + 0x1ae65d8) + 0x5c);
          piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01ae674c + 0x1ae65e8),1);
          auStack_1c[0] = FUN_01ae462c(param_1);
          iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_01ae6750 + 0x1ae660c),auStack_1c);
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
          func_0x01afd53c(iVar1,0);
        }
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01ae6754 + 0x1ae66a4));
        func_0x0152e3ec(uVar7,param_1,**(undefined4 **)(_UNK_01ae6758 + 0x1ae66c0),0);
        if (*(int *)(**(int **)(_UNK_01ae675c + 0x1ae66d4) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar7,0);
      }
      return;
    }
    iVar1 = func_0x029540a4(0xa495,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0xa494,0);
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

