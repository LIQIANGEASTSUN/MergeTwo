
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019376d8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_019379b8 + 0x19376f0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019379bc + 0x1937704));
    func_0x01438628(*(undefined4 *)(_UNK_019379c0 + 0x1937710));
    func_0x01438628(*(undefined4 *)(_UNK_019379c4 + 0x193771c));
    func_0x01438628(*(undefined4 *)(_UNK_019379c8 + 0x1937728));
    func_0x01438628(*(undefined4 *)(_UNK_019379cc + 0x1937734));
    func_0x01438628(*(undefined4 *)(_UNK_019379d0 + 0x1937740));
    func_0x01438628(*(undefined4 *)(_UNK_019379d4 + 0x193774c));
    func_0x01438628(*(undefined4 *)(_UNK_019379d8 + 0x1937758));
    func_0x01438628(*(undefined4 *)(_UNK_019379dc + 0x1937764));
    *pcVar4 = '\x01';
  }
  iVar8 = 0;
  puVar10 = *(undefined4 **)(_UNK_019379e0 + 0x1937780);
  while( true ) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar8) break;
    iVar9 = *(int *)(param_1 + 8);
    iVar5 = **(int **)(**(int **)(_UNK_019379e4 + 0x19377a4) + 0x5c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x0152983c(iVar9,iVar8,*puVar10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar9 + 8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02e651cc(iVar5,uVar6,0);
    if (iVar5 == 0) {
      iVar5 = 0;
      while( true ) {
        iVar9 = *(int *)(param_1 + 8);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x0152983c(iVar9,iVar8,*puVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar5) break;
        if (*(int *)(**(int **)(_UNK_019379e8 + 0x1937858) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x0202346c(0);
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019379ec + 0x1937880));
        func_0x02025440(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(param_1 + 8);
        *(undefined1 *)(iVar1 + 0x25) = 0;
        *(undefined4 *)(iVar1 + 8) = 0x85;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x0152983c(iVar7,iVar8,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar7 + 8);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02024d08(iVar9,iVar1,1,0);
        iVar5 = iVar5 + 1;
      }
    }
    iVar8 = iVar8 + 1;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  func_0x024f05c0(iVar8,1,**(undefined4 **)(_UNK_019379f0 + 0x1937928));
  if (*(int *)(**(int **)(_UNK_019379f4 + 0x193793c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_019379f8 + 0x1937958));
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  func_0x02bb3638(iVar8,0x5e,0);
  if (*(int *)(**(int **)(_UNK_019379fc + 0x1937988) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = FUN_01924e6c(0);
  if (iVar8 == 0) {
    return;
  }
  iVar5 = func_0x02953fd4(0x976a,0);
  if (iVar5 == 0) {
    iVar8 = func_0x0194ac50(iVar8);
    if (iVar8 == 0) {
      return;
    }
    pcVar4 = (char *)(_UNK_02beb294 + 0x2beb1e4);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02beb298 + 0x2beb1f8),0);
      *pcVar4 = '\x01';
    }
    iVar5 = func_0x02953fd4(0x1ddd,0);
    if (iVar5 == 0) {
      iVar8 = *(int *)(iVar8 + 0x24);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      piVar2 = (int *)func_0x035e8140(iVar8,**(undefined4 **)(_UNK_02beb29c + 0x2beb260));
      if (piVar2 == (int *)0x0) {
        func_0x014388e4();
      }
                    /* WARNING: Could not recover jumptable at 0x02beb290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x188))(piVar2,1,*(undefined4 *)(*piVar2 + 0x18c));
      return;
    }
    iVar5 = func_0x029540a4(0x1ddd,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar5 = func_0x029540a4(0x976a,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,iVar8,0);
  iVar9 = *(int *)(iVar5 + 8);
  uVar6 = *(undefined4 *)(iVar5 + 0xc);
  iVar8 = *(int *)(iVar5 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar8 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar9,uVar6,&uStack_30,uVar3,0,0);
  return;
}

