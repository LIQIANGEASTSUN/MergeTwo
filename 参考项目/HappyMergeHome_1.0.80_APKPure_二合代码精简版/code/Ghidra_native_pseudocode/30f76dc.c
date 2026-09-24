
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031076dc(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  
  pcVar7 = (char *)(_UNK_03107cc8 + 0x31076fc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03107ccc + 0x3107710));
    func_0x01438628(*(undefined4 *)(_UNK_03107cd0 + 0x310771c));
    func_0x01438628(*(undefined4 *)(_UNK_03107cd4 + 0x3107728));
    func_0x01438628(*(undefined4 *)(_UNK_03107cd8 + 0x3107734));
    func_0x01438628(*(undefined4 *)(_UNK_03107cdc + 0x3107740));
    func_0x01438628(*(undefined4 *)(_UNK_03107ce0 + 0x310774c));
    func_0x01438628(*(undefined4 *)(_UNK_03107ce4 + 0x3107758));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1463,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1463,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a3aac + 0x28a39cc);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a3ab0 + 0x28a39e0),param_1,0);
      *pcVar7 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
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
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar6,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a3ab4 + 0x28a3a9c));
    return iVar2;
  }
  iVar2 = FUN_03105e3c(param_1);
  fVar1 = _UNK_03107bbc;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_03107ce8 + 0x31077d8);
    while( true ) {
      iVar9 = func_0x0310bc78(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      func_0x0310cf84(param_1);
      iVar9 = func_0x0310bc78(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x04cfd760(iVar9,iVar2,*puVar8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x24) == 0) {
        iVar3 = func_0x0310c164(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_40 = (uint)lVar13;
        uStack_44 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = func_0x0310c164(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0x10) * fVar1;
        iStack_3c = iVar2;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_48 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar2 = func_0x0310c164(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar2 + 0x50);
        uVar6 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_03107cec + 0x3107928) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03107cf0 + 0x3107948));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_03107cf4 + 0x310797c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02aedf90(uVar10,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
        iVar4 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar2 = iStack_3c;
        puVar8 = *(undefined4 **)(_UNK_03107cf8 + 0x31079d0);
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_03107cfc + 0x31079e0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03107d00 + 0x31079fc));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x026ffbe0(iVar4,0);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if (uStack_44 < uVar5 || uVar5 - uStack_44 < (uint)(uStack_40 <= (uint)uVar14)) {
            if (*(int *)(**(int **)(_UNK_03107d04 + 0x3107a3c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03107d08 + 0x3107a58));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar14 = func_0x026ffbe0(iVar4,0);
            uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
            if (uVar5 <= uStack_48 && (uint)((uint)lVar13 <= (uint)uVar14) <= uVar5 - uStack_48)
            goto LAB_03107a88;
          }
        }
        else {
LAB_03107a88:
          iVar4 = func_0x0310cf84(param_1);
          if (iVar4 == 0) {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = func_0x0310c164(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x046c26fc(iVar4,uVar10,**(undefined4 **)(_UNK_03107d14 + 0x3107c04));
              if (iVar4 != 0) {
                iVar4 = func_0x0310c164(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x03b70fac(iVar4,uVar10,**(undefined4 **)(_UNK_03107d18 + 0x3107c50));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) goto LAB_03107ca8;
              }
            }
            if (iVar3 != 0) {
              iVar3 = func_0x0310c164(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) goto LAB_03107ca8;
            }
          }
          else {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = func_0x0310c164(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x046c26fc(iVar4,uVar10,**(undefined4 **)(_UNK_03107d0c + 0x3107ae0));
              if (iVar4 != 0) {
                iVar4 = func_0x0310c164(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x03b70fac(iVar4,uVar10,**(undefined4 **)(_UNK_03107d10 + 0x3107b2c));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) {
                  iVar4 = func_0x0310c164(param_1);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_03107ca8;
                }
              }
            }
            if (iVar3 != 0) {
              iVar3 = func_0x0310c164(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) {
                iVar3 = func_0x0310c164(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_03107ca8;
              }
            }
          }
          iVar3 = func_0x03118764(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_03107ca8:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

