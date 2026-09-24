
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03079ef8(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  
  pcVar6 = (char *)(_UNK_0307a33c + 0x3079f18);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0307a340 + 0x3079f2c));
    func_0x01438628(*(undefined4 *)(_UNK_0307a344 + 0x3079f38));
    func_0x01438628(*(undefined4 *)(_UNK_0307a348 + 0x3079f44));
    func_0x01438628(*(undefined4 *)(_UNK_0307a34c + 0x3079f50));
    func_0x01438628(*(undefined4 *)(_UNK_0307a350 + 0x3079f5c));
    func_0x01438628(*(undefined4 *)(_UNK_0307a354 + 0x3079f68));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1524,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1524,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a5018 + 0x28a4f38);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a501c + 0x28a4f4c),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a5020 + 0x28a5008));
    return iVar2;
  }
  iVar2 = FUN_03078794(param_1);
  fVar1 = _UNK_0307a338;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar9 = *(undefined4 **)(_UNK_0307a358 + 0x3079fe8);
    while( true ) {
      iVar8 = func_0x0307ee70(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      iVar8 = func_0x0307ee70(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04cfd760(iVar8,iVar2,*puVar9);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x24) == 1) {
        iVar3 = func_0x0307f35c(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar8 + 0xc) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar14;
        uStack_40 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = func_0x0307f35c(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar8 + 0x10) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar13 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uVar11 = (uint)lVar13;
        uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
        func_0x0308bcf0(param_1,(int)((ulonglong)lVar14 >> 0x20),uVar11,uVar7);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar9 = *(undefined4 **)(_UNK_0307a35c + 0x307a138);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_0307a360 + 0x307a144) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0307a364 + 0x307a160));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uStack_40 < uVar4 || uVar4 - uStack_40 < (uint)(uStack_3c <= (uint)uVar15)) {
            if (*(int *)(**(int **)(_UNK_0307a368 + 0x307a1a0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0307a36c + 0x307a1bc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x026ffbe0(iVar3,0);
            uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
            if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7)
            goto LAB_0307a1e8;
          }
        }
        else {
LAB_0307a1e8:
          uVar10 = func_0x0308bf80(param_1);
          if (0 < *(int *)(iVar8 + 0x1c)) {
            iVar3 = func_0x0307f35c(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c26fc(iVar3,uVar10,**(undefined4 **)(_UNK_0307a370 + 0x307a238));
            if (iVar3 != 0) {
              iVar3 = func_0x0307f35c(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x30);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b70fac(iVar3,uVar10,**(undefined4 **)(_UNK_0307a374 + 0x307a280));
              if (*(int *)(iVar8 + 0x1c) <= iVar3) {
                iVar3 = func_0x0307f35c(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0307a318;
              }
            }
          }
          iVar3 = func_0x0307f35c(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0x28) <= *(int *)(iVar3 + 0x58)) {
            iVar3 = func_0x0307f35c(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0307a318;
          }
          iVar3 = func_0x0308c100(param_1,iVar8);
          if (iVar3 != 0) {
            return iVar8;
          }
        }
      }
LAB_0307a318:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

