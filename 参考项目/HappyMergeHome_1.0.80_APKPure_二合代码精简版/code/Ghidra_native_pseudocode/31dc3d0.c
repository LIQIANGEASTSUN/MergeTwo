
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031ec3d0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *extraout_r3;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_031ec864 + 0x31ec3e8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031ec868 + 0x31ec3fc));
    func_0x01438628(*(undefined4 *)(_UNK_031ec86c + 0x31ec408));
    func_0x01438628(*(undefined4 *)(_UNK_031ec870 + 0x31ec414));
    func_0x01438628(*(undefined4 *)(_UNK_031ec874 + 0x31ec420));
    func_0x01438628(*(undefined4 *)(_UNK_031ec878 + 0x31ec42c));
    func_0x01438628(*(undefined4 *)(_UNK_031ec87c + 0x31ec438));
    func_0x01438628(*(undefined4 *)(_UNK_031ec880 + 0x31ec444));
    func_0x01438628(*(undefined4 *)(_UNK_031ec884 + 0x31ec450));
    *pcVar9 = '\x01';
  }
  piVar15 = (int *)param_1[6];
  iStack_28 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_28 = param_1[0x12];
    param_1[0x12] = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_031ec888 + 0x31ec480) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031ec88c + 0x31ec49c));
    iVar11 = param_1[5];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x020b33fc(iVar2,iVar11,0);
    iVar12 = param_1[0x11];
    iVar8 = param_1[10];
    iVar10 = param_1[0xb];
    iVar14 = param_1[0xe];
    iVar11 = param_1[5];
    iVar16 = param_1[0xc];
    iVar17 = param_1[0xd];
    iVar2 = param_1[0x10];
    iVar3 = param_1[7];
    iVar7 = param_1[0xf];
    iVar4 = param_1[8];
    piVar6 = param_1;
    if (piVar15 == (int *)0x0) {
      func_0x014388e4();
      piVar6 = extraout_r3;
    }
    func_0x029f063c(piVar15,iVar3,iVar4,piVar6,iVar8,iVar10,iVar16,iVar17,iVar14,iVar7,
                    (char)iVar2 != '\0',iVar11,iVar12,0);
    if (piVar15 == (int *)0x0) {
      func_0x014388e4();
    }
    (**(code **)(*piVar15 + 0x150))(piVar15,*(undefined4 *)(*piVar15 + 0x154));
    uVar5 = (**(code **)(*piVar15 + 0xe0))(piVar15,*(undefined4 *)(*piVar15 + 0xe4));
    uVar5 = func_0x04f5b548(**(undefined4 **)(_UNK_031ec890 + 0x31ec59c),uVar5,0);
    iVar11 = **(int **)(_UNK_031ec894 + 0x31ec5b4);
    iVar2 = *(int *)(iVar11 + 0x1c);
    if (iVar2 == 0) {
      func_0x014909d8(iVar11);
      iVar2 = *(int *)(iVar11 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x0149097c();
    }
    uVar13 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_031ec898 + 0x31ec614) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_031ec898 + 0x31ec614));
    }
    func_0x026794a8(uVar5,uVar13,0);
    if (*(int *)(**(int **)(_UNK_031ec89c + 0x31ec64c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x029aa074(1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_28 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x05055bbc(&iStack_28,0);
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[0x12] = iStack_28;
      func_0x014385cc(param_1 + 0x12,0);
      func_0x035a5830(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_031ec8a0 + 0x31ec6c8));
      return;
    }
  }
  func_0x05055ca8(&iStack_28,0);
  if (piVar15 == (int *)0x0) {
    func_0x014388e4();
  }
  FUN_031e6c04(piVar15);
  if (piVar15 == (int *)0x0) {
    func_0x014388e4();
  }
  uVar1 = FUN_031e6814(piVar15);
  if (piVar15 == (int *)0x0) {
    func_0x014388e4();
  }
  piVar6 = *(int **)(_UNK_031ec8a4 + 0x31ec744);
  *(undefined1 *)((int)piVar15 + 0x3a) = uVar1;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x031e73e4();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x02f7d38c(iVar2,0);
  *param_1 = -2;
  func_0x0505659c(param_1 + 1,0);
  return;
}

