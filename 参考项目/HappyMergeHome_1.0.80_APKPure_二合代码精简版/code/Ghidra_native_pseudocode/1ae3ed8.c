
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01af3ed8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01af4208 + 0x1af3ef4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af420c + 0x1af3f08));
    func_0x01438628(*(undefined4 *)(_UNK_01af4210 + 0x1af3f14));
    func_0x01438628(*(undefined4 *)(_UNK_01af4214 + 0x1af3f20));
    func_0x01438628(*(undefined4 *)(_UNK_01af4218 + 0x1af3f2c));
    func_0x01438628(*(undefined4 *)(_UNK_01af421c + 0x1af3f38));
    func_0x01438628(*(undefined4 *)(_UNK_01af4220 + 0x1af3f44));
    func_0x01438628(*(undefined4 *)(_UNK_01af4224 + 0x1af3f50));
    func_0x01438628(*(undefined4 *)(_UNK_01af4228 + 0x1af3f5c));
    func_0x01438628(*(undefined4 *)(_UNK_01af422c + 0x1af3f68));
    func_0x01438628(*(undefined4 *)(_UNK_01af4230 + 0x1af3f74));
    func_0x01438628(*(undefined4 *)(_UNK_01af4234 + 0x1af3f80));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2d27,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01af4238 + 0x1af3fe0));
    func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_01af423c + 0x1af3ff4));
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_01af4240 + 0x1af4010) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01af4244 + 0x1af402c));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x34);
      if (iVar7 != 0) {
        iStack_2c = iVar2;
        if (0 < *(int *)(iVar7 + 0xc)) {
          iVar6 = 0;
          iVar2 = *(int *)(param_2 + 8) * 100;
          iStack_28 = iVar2 + 100;
          puVar10 = *(undefined4 **)(_UNK_01af4248 + 0x1af4080);
          iStack_30 = iVar2;
          do {
            iVar3 = func_0x0152983c(iVar7,iVar6,*puVar10);
            iVar1 = iStack_2c;
            if (((iVar3 != 0) && (iVar2 <= *(int *)(iVar3 + 8))) &&
               (*(int *)(iVar3 + 8) < iStack_28)) {
              if (iStack_2c == 0) {
                func_0x014388e4();
              }
              iVar12 = *(int *)(iVar1 + 8);
              uVar11 = *(uint *)(iVar1 + 0xc);
              piVar4 = *(int **)(_UNK_01af424c + 0x1af40e4);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar2 = *piVar4;
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              if (uVar11 < *(uint *)(iVar12 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar11 + 1;
                piVar4 = (int *)(iVar12 + uVar11 * 4 + 0x10);
                *piVar4 = iVar3;
                func_0x014385cc(piVar4,iVar3);
                iVar2 = iStack_30;
              }
              else {
                func_0x0152874c(iVar1,iVar3,
                                *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
                iVar2 = iStack_30;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar7 + 0xc));
        }
        piVar4 = *(int **)(_UNK_01af4250 + 0x1af4150);
        iVar7 = *piVar4;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar4;
        }
        iVar2 = iStack_2c;
        iVar6 = *(int *)(*(int *)(iVar7 + 0x5c) + 8);
        if (iVar6 == 0) {
          if (*(int *)(iVar7 + 0x74) == 0) {
            func_0x014387a4();
            iVar7 = *piVar4;
          }
          uVar9 = **(undefined4 **)(iVar7 + 0x5c);
          iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01af4254 + 0x1af419c));
          func_0x024f1190(iVar6,uVar9,**(undefined4 **)(_UNK_01af4258 + 0x1af41bc),0);
          piVar4 = (int *)(*(int *)(*piVar4 + 0x5c) + 8);
          *piVar4 = iVar6;
          func_0x014385cc(piVar4,iVar6);
        }
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f11a0(iVar2,iVar6,**(undefined4 **)(_UNK_01af425c + 0x1af41f4));
      }
    }
    return iVar2;
  }
  iVar2 = func_0x029540a4(0x2d27,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_028c6eec + 0x28c6df8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028c6ef0 + 0x28c6e0c),param_1,param_2,0);
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x024f56c0(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar5,0,0);
  iVar2 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028c6ef4 + 0x28c6edc));
  return iVar2;
}

