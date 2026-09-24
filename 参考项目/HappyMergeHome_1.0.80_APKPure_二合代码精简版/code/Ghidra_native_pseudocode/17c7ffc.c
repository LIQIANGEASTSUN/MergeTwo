
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017d7ffc(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
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
  
  pcVar2 = (char *)(_UNK_017d8348 + 0x17d800c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d834c + 0x17d8020));
    func_0x01438628(*(undefined4 *)(_UNK_017d8350 + 0x17d802c));
    func_0x01438628(*(undefined4 *)(_UNK_017d8354 + 0x17d8038));
    func_0x01438628(*(undefined4 *)(_UNK_017d8358 + 0x17d8044));
    func_0x01438628(*(undefined4 *)(_UNK_017d835c + 0x17d8050));
    func_0x01438628(*(undefined4 *)(_UNK_017d8360 + 0x17d805c));
    func_0x01438628(*(undefined4 *)(_UNK_017d8364 + 0x17d8068));
    func_0x01438628(*(undefined4 *)(_UNK_017d8368 + 0x17d8074));
    func_0x01438628(*(undefined4 *)(_UNK_017d836c + 0x17d8080));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1378,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1378,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar5 = *(int **)(_UNK_017d8370 + 0x17d80d4);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_017d0b50();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_017d5bc8(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017d0b50();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017d0ea0(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_017d8374 + 0x17d8154) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_017d0b50();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_017d48ec(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ece6c(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_017d8378 + 0x17d81dc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d837c + 0x17d81f8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017d8380 + 0x17d8218));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05a8(iVar1,0x12,**(undefined4 **)(_UNK_017d8384 + 0x17d8250));
        if (*(int *)(**(int **)(_UNK_017d8388 + 0x17d8264) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d838c + 0x17d8280));
        piVar5 = (int *)FUN_017d0b50();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_017d8390 + 0x17d82c0);
        iVar7 = *(int *)(iVar6 + 0x1c);
        if (iVar7 == 0) {
          func_0x014909d8(iVar6);
          iVar7 = *(int *)(iVar6 + 0x1c);
        }
        iVar7 = *(int *)(iVar7 + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar7 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar4,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

