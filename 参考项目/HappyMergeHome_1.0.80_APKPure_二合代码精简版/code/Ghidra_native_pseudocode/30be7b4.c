
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030ce7b4(int *param_1)

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
  
  pcVar6 = (char *)(_UNK_030cec00 + 0x30ce7d4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030cec04 + 0x30ce7e8));
    func_0x01438628(*(undefined4 *)(_UNK_030cec08 + 0x30ce7f4));
    func_0x01438628(*(undefined4 *)(_UNK_030cec0c + 0x30ce800));
    func_0x01438628(*(undefined4 *)(_UNK_030cec10 + 0x30ce80c));
    func_0x01438628(*(undefined4 *)(_UNK_030cec14 + 0x30ce818));
    func_0x01438628(*(undefined4 *)(_UNK_030cec18 + 0x30ce824));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1545,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1545,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a5330 + 0x28a5250);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a5334 + 0x28a5264),param_1,0);
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
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a5338 + 0x28a5320));
    return iVar2;
  }
  iVar2 = FUN_030ccf14(param_1);
  fVar1 = _UNK_030cebfc;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar9 = *(undefined4 **)(_UNK_030cec1c + 0x30ce8a4);
    while( true ) {
      iVar8 = func_0x030d27b8(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      func_0x030d3ac4(param_1);
      iVar8 = func_0x030d27b8(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04cfd760(iVar8,iVar2,*puVar9);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x24) == 0) {
        iVar3 = func_0x030d2ca4(param_1);
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
        iVar3 = func_0x030d2ca4(param_1);
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
        func_0x030df3d8(param_1,(int)((ulonglong)lVar14 >> 0x20),uVar11,uVar7);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar9 = *(undefined4 **)(_UNK_030cec20 + 0x30ce9fc);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_030cec24 + 0x30cea08) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030cec28 + 0x30cea24));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uStack_40 < uVar4 || uVar4 - uStack_40 < (uint)(uStack_3c <= (uint)uVar15)) {
            if (*(int *)(**(int **)(_UNK_030cec2c + 0x30cea64) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030cec30 + 0x30cea80));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x026ffbe0(iVar3,0);
            uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
            if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7)
            goto LAB_030ceaac;
          }
        }
        else {
LAB_030ceaac:
          uVar10 = func_0x030df668(param_1);
          if (0 < *(int *)(iVar8 + 0x1c)) {
            iVar3 = func_0x030d2ca4(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c26fc(iVar3,uVar10,**(undefined4 **)(_UNK_030cec34 + 0x30ceafc));
            if (iVar3 != 0) {
              iVar3 = func_0x030d2ca4(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x30);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b70fac(iVar3,uVar10,**(undefined4 **)(_UNK_030cec38 + 0x30ceb44));
              if (*(int *)(iVar8 + 0x1c) <= iVar3) {
                iVar3 = func_0x030d2ca4(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_030cebdc;
              }
            }
          }
          iVar3 = func_0x030d2ca4(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0x28) <= *(int *)(iVar3 + 0x58)) {
            iVar3 = func_0x030d2ca4(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_030cebdc;
          }
          iVar3 = func_0x030df7e8(param_1,iVar8);
          if (iVar3 != 0) {
            return iVar8;
          }
        }
      }
LAB_030cebdc:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

