
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c59834(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar4 = (char *)(_UNK_02c59c40 + 0x2c59848);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c59c44 + 0x2c5985c));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c48 + 0x2c59868));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c4c + 0x2c59874));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c50 + 0x2c59880));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c54 + 0x2c5988c));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c58 + 0x2c59898));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c5c + 0x2c598a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c60 + 0x2c598b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c64 + 0x2c598bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c59c68 + 0x2c598c8));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar5 + 0x40) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = func_0x014e94d8(*(int *)(iVar5 + 0x40),0);
    }
    if (*(int *)(**(int **)(_UNK_02c59c90 + 0x2c59b98) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x02af31e0(uVar6,0,0);
    FUN_02c53c40(iVar5,0,0);
    if (*(int *)(**(int **)(_UNK_02c59c94 + 0x2c59bd4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c59c98 + 0x2c59bf0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    FUN_02badc08(iVar2,0,0);
    *(undefined1 *)(iVar5 + 0xc4) = 1;
    FUN_02c53624(iVar5,0);
    FUN_02c53134(iVar5,0);
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      piVar1 = *(int **)(_UNK_02c59c6c + 0x2c598fc);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c59c70 + 0x2c5991c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = FUN_02be0a54(iVar2,0,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar5 + 0x10);
      *(undefined4 *)(iVar5 + 0xcc) = uVar6;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024efb0c(iVar2,0);
      FUN_02c53008(iVar5,**(undefined4 **)(_UNK_02c59c74 + 0x2c59988),iVar2 + 1,0);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024efb0c(iVar2,0);
      FUN_02c53008(iVar5,**(undefined4 **)(_UNK_02c59c78 + 0x2c599c0),iVar2 + 2,0);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024efb0c(iVar2,0);
      piVar1 = *(int **)(_UNK_02c59c7c + 0x2c599f0);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar7 = *(undefined4 **)(_UNK_02c59c80 + 0x2c59a0c);
      uVar6 = func_0x014e9518(*puVar7);
      piVar8 = *(int **)(_UNK_02c59c84 + 0x2c59a20);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = iVar2 + 6;
      iVar3 = func_0x024ef144(uVar6,0,0);
      if (iVar3 != 0) {
        if (*(int *)(*piVar1 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar7);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar3 + 0x10);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x024ef144(uVar6,0,0);
        if (iVar3 != 0) {
          if (*(int *)(*piVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(*puVar7);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024efb0c(iVar2,0);
          iVar2 = iVar2 + 1;
        }
      }
      FUN_02c53008(iVar5,**(undefined4 **)(_UNK_02c59c88 + 0x2c59b18),iVar2,0);
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02c59c8c + 0x2c59b2c));
      func_0x024f008c(uVar6,0);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar6);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}

