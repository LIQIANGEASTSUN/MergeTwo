
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019244fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01924990 + 0x1924520);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01924994 + 0x1924534));
    func_0x01438628(*(undefined4 *)(_UNK_01924998 + 0x1924540));
    func_0x01438628(*(undefined4 *)(_UNK_0192499c + 0x192454c));
    func_0x01438628(*(undefined4 *)(_UNK_019249a0 + 0x1924558));
    func_0x01438628(*(undefined4 *)(_UNK_019249a4 + 0x1924564));
    func_0x01438628(*(undefined4 *)(_UNK_019249a8 + 0x1924570));
    func_0x01438628(*(undefined4 *)(_UNK_019249ac + 0x192457c));
    func_0x01438628(*(undefined4 *)(_UNK_019249b0 + 0x1924588));
    func_0x01438628(*(undefined4 *)(_UNK_019249b4 + 0x1924594));
    func_0x01438628(*(undefined4 *)(_UNK_019249b8 + 0x19245a0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x975d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019249bc + 0x1924610) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01920184();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x019249ec(iVar1,param_3);
    uVar2 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar6 = 0;
      piVar8 = *(int **)(_UNK_019249c0 + 0x1924674);
      do {
        uStack_28 = func_0x024f0530(iVar1,iVar6,**(undefined4 **)(_UNK_019249c4 + 0x1924688));
        if (*(int *)(**(int **)(_UNK_019249c8 + 0x19246a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_019249cc + 0x19246c0));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02bdd790(iVar3,param_2,uVar2,0,0);
        if (iVar3 == -1) {
          if (*(int *)(**(int **)(_UNK_019249d0 + 0x192478c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = FUN_01920184();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x01924e00(iVar3);
          uVar2 = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,**(undefined4 **)(_UNK_019249d4 + 0x19247dc));
          iVar3 = FUN_01920184();
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
          iVar3 = func_0x01924e6c();
          if (iVar3 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x0193d3a8(iVar3,0);
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_019249d8 + 0x1924708) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_019249dc + 0x1924724));
          uVar2 = uStack_28;
          uVar7 = *(undefined4 *)(param_1 + 0x10);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02bd2cf0(iVar4,iVar3,uVar2,1,2,uVar7,param_2,1,0xffffffff,0,0);
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(&uStack_28,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar3,0x351,uVar2,**(undefined4 **)(_UNK_019249e0 + 0x1924890),0,0,0);
        uVar2 = uStack_28;
        iVar3 = **(int **)(**(int **)(_UNK_019249e4 + 0x19248c8) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02e651cc(iVar3,uVar2,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_019249e8 + 0x1924924));
          func_0x02025440(iVar4,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          *(undefined1 *)(iVar4 + 0x25) = 0;
          *(undefined4 *)(iVar4 + 8) = 0x46;
          *(undefined4 *)(iVar4 + 0xc) = uStack_28;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02024d08(iVar3,iVar4,1,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0xc));
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x975d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d664c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

