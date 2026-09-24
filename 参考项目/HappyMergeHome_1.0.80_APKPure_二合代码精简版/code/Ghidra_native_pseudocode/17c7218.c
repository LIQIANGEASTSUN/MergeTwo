
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017d7218(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_017d75fc + 0x17d7230);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d7600 + 0x17d7244));
    func_0x01438628(*(undefined4 *)(_UNK_017d7604 + 0x17d7250));
    func_0x01438628(*(undefined4 *)(_UNK_017d7608 + 0x17d725c));
    func_0x01438628(*(undefined4 *)(_UNK_017d760c + 0x17d7268));
    func_0x01438628(*(undefined4 *)(_UNK_017d7610 + 0x17d7274));
    func_0x01438628(*(undefined4 *)(_UNK_017d7614 + 0x17d7280));
    func_0x01438628(*(undefined4 *)(_UNK_017d7618 + 0x17d728c));
    func_0x01438628(*(undefined4 *)(_UNK_017d761c + 0x17d7298));
    func_0x01438628(*(undefined4 *)(_UNK_017d7620 + 0x17d72a4));
    func_0x01438628(*(undefined4 *)(_UNK_017d7624 + 0x17d72b0));
    func_0x01438628(*(undefined4 *)(_UNK_017d7628 + 0x17d72bc));
    func_0x01438628(*(undefined4 *)(_UNK_017d762c + 0x17d72c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8fa2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8fa2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
  if (*(int *)(**(int **)(_UNK_017d7630 + 0x17d7324) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d7634 + 0x17d7340));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017d7638 + 0x17d7360));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x20c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017d763c + 0x17d7394));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017d7640 + 0x17d73ac));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_017d7644 + 0x17d73c4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_017d7648 + 0x17d73f0);
    puVar8 = *(undefined4 **)(_UNK_017d764c + 0x17d73f8);
    do {
      if (*(int *)(**(int **)(_UNK_017d7650 + 0x17d7400) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017d7654 + 0x17d741c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_017d7658 + 0x17d743c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x20c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_017d765c + 0x17d7514));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_017d7660 + 0x17d754c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017d7664 + 0x17d7568));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_017d7668 + 0x17d7588));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x20c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_017d766c + 0x17d75e0));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

