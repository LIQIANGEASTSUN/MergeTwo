
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016baf24(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
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
  
  pcVar2 = (char *)(_UNK_016bb2f4 + 0x16baf34);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bb2f8 + 0x16baf48));
    func_0x01438628(*(undefined4 *)(_UNK_016bb2fc + 0x16baf54));
    func_0x01438628(*(undefined4 *)(_UNK_016bb300 + 0x16baf60));
    func_0x01438628(*(undefined4 *)(_UNK_016bb304 + 0x16baf6c));
    func_0x01438628(*(undefined4 *)(_UNK_016bb308 + 0x16baf78));
    func_0x01438628(*(undefined4 *)(_UNK_016bb30c + 0x16baf84));
    func_0x01438628(*(undefined4 *)(_UNK_016bb310 + 0x16baf90));
    func_0x01438628(*(undefined4 *)(_UNK_016bb314 + 0x16baf9c));
    func_0x01438628(*(undefined4 *)(_UNK_016bb318 + 0x16bafa8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1832,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1832,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar6 = *(int **)(_UNK_016bb31c + 0x16baffc);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_016af738();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_016b8874(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016af738();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_016afa88(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_016bb320 + 0x16bb07c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_016af738();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_016b6be8(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_016bb324 + 0x16bb104) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016bb328 + 0x16bb120));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016bb32c + 0x16bb140));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar4 = *(undefined4 **)(_UNK_016bb334 + 0x16bb1bc);
          func_0x024f05a8(0,0x32,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x33,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x34,*puVar4);
          func_0x014388e4();
        }
        else {
          puVar4 = *(undefined4 **)(_UNK_016bb330 + 0x16bb178);
          func_0x024f05a8(iVar1,0x32,*puVar4);
          func_0x024f05a8(iVar1,0x33,*puVar4);
          func_0x024f05a8(iVar1,0x34,*puVar4);
        }
        func_0x024f05a8(iVar1,0x35,**(undefined4 **)(_UNK_016bb338 + 0x16bb1fc));
        if (*(int *)(**(int **)(_UNK_016bb33c + 0x16bb210) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016bb340 + 0x16bb22c));
        piVar6 = (int *)FUN_016af738();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_016bb344 + 0x16bb26c);
        iVar8 = *(int *)(iVar7 + 0x1c);
        if (iVar8 == 0) {
          func_0x014909d8(iVar7);
          iVar8 = *(int *)(iVar7 + 0x1c);
        }
        iVar8 = *(int *)(iVar8 + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar5,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

