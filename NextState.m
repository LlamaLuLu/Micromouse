classdef NextState < Simulink.IntEnumType
    % Enumeration for micromouse state transitions
    enumeration
        NONE(0)
        SCAN_ENV(1)
        DECIDE(2)
        TURN_LEFT(3)
        MOVE_FORWARD(4)
        TURN_RIGHT(5)
        TURN_BACK(6)
        UPDATE_POSITION(7)
        CHECK_DONE(8)
        END(9)
    end
end