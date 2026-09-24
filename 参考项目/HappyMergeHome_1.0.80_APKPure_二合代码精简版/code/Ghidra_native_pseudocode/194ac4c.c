
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0195ac4c(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  
  pcVar6 = (char *)(_UNK_0195b090 + 0x195ac6c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0195b094 + 0x195ac80));
    func_0x01438628(*(undefined4 *)(_UNK_0195b098 + 0x195ac8c));
    func_0x01438628(*(undefined4 *)(_UNK_0195b09c + 0x195ac98));
    func_0x01438628(*(undefined4 *)(_UNK_0195b0a0 + 0x195aca4));
    func_0x01438628(*(undefined4 *)(_UNK_0195b0a4 + 0x195acb0));
    func_0x01438628(*(undefined4 *)(_UNK_0195b0a8 + 0x195acbc));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1632,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1632,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a6bb4 + 0x28a6ad4);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a6bb8 + 0x28a6ae8),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a6bbc + 0x28a6ba4));
    return iVar2;
  }
  iVar2 = FUN_019594e8(param_1);
  fVar1 = _UNK_0195b08c;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_0195b0ac + 0x195ad3c);
    while( true ) {
      iVar9 = func_0x0195fbc4(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      iVar9 = func_0x0195fbc4(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x0152983c(iVar9,iVar2,*puVar8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x24) == 1) {
        iVar3 = func_0x019600b0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar14;
        uStack_40 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = func_0x019600b0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar9 + 0x10) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar13 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uVar11 = (uint)lVar13;
        uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
        func_0x0196ca40(param_1,(int)((ulonglong)lVar14 >> 0x20),uVar11,uVar7);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar8 = *(undefined4 **)(_UNK_0195b0b0 + 0x195ae8c);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_0195b0b4 + 0x195ae98) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0195b0b8 + 0x195aeb4));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uStack_40 < uVar4 || uVar4 - uStack_40 < (uint)(uStack_3c <= (uint)uVar15)) {
            if (*(int *)(**(int **)(_UNK_0195b0bc + 0x195aef4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0195b0c0 + 0x195af10));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x026ffbe0(iVar3,0);
            uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
            if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7)
            goto LAB_0195af3c;
          }
        }
        else {
LAB_0195af3c:
          uVar10 = func_0x0196ccd0(param_1);
          if (0 < *(int *)(iVar9 + 0x1c)) {
            iVar3 = func_0x019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0540(iVar3,uVar10,**(undefined4 **)(_UNK_0195b0c4 + 0x195af8c));
            if (iVar3 != 0) {
              iVar3 = func_0x019600b0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x30);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x024f05d4(iVar3,uVar10,**(undefined4 **)(_UNK_0195b0c8 + 0x195afd4));
              if (*(int *)(iVar9 + 0x1c) <= iVar3) {
                iVar3 = func_0x019600b0(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0195b06c;
              }
            }
          }
          iVar3 = func_0x019600b0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) {
            iVar3 = func_0x019600b0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0195b06c;
          }
          iVar3 = func_0x0196ce50(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_0195b06c:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

